#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int k ;
    cin>>k;
    vector<int>result;
    deque<int>q;

    for(int i=0; i<n; i++)
    {
        if(v[i] < 0)
        {
            q.push_back(v[i]);
        }
        if(i>=k-1)
        {
            if(!q.empty())
            {
                result.push_back(q.front());
            }
            else{
                result.push_back(0);
            }
        }
        if(!q.empty() && q.front() == v[i-k+1])
        {
            q.pop_front();
        }
    }
    for(int x : result)
    {
        cout<<x<<" ";
    }
    return 0;
}