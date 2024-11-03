#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long int n, x;
    cin >> n >> x;
    vector<long long>v;
    for(int i=0; i<n; i++)
    {
        long long int w;
        cin>>w;
        if(w != x)
        {
            v.push_back(w);
        }
    }
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    cout << '\n';
    
    return 0;
}
