#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n; cin>> n;
        vector<ll>v;
        for(int i=0; i<n; i++)
        {
           ll x;
           cin>>x;
           v.push_back(x);
        }
        sort(v.begin(), v.end());
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        
        else if(n== 2)
        {
            if(v[0]==v[1] || v[0]==0 || v[1]==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
	    {
	        int c=0;
	        for(int i=0;i<n-1;i++)
	        {
	            if(v[i]==0)
	            {
	                continue;
	            }
	            else if(v[i]!=v[i+1])
	            {
	                c=1;break;
	            }
	        }
	        if(c==1) cout<<"NO\n";
	        else cout<<"YES\n";
	    }

    }
    
    return 0;
}