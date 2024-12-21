#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool isnondecreasing(vector<int>&v)
{
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i] > v[i+1]) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        if(isnondecreasing(v))
        {
            cout<<"Yes\n";
            continue;
        }

        int idx = 0;
        
        for(int i=0; i<n; i++)
        {
            if(v[i] > v[i+1])
            {
                idx = i;
                break;;
            }
        }

        vector<int>x(v.begin(), v.begin()+idx+1);
        vector<int>y(v.begin()+idx+1, v.end());

        vector<int>result = y;
        result.insert(result.end(), x.begin(), x.end());

        if(isnondecreasing(result))
        {
            cout<<"Yes\n";
        }
        else cout<<"No\n";

    }
    
    return 0;
}