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
        int n,q;
        cin>>n>>q;
        vector<ll>a(n);
        vector<ll>Q(q);

        for(int i=0;i<n; i++)
            cin>>a[i];
        for(int i=0;i<q; i++)
            cin>>Q[i];
        
        set<ll>used;

        for(int i=0; i<q; i++)
        {
            if(used.count(Q[i])) continue;

            used.insert(Q[i]);

            for(int j=0; j<n; j++)
            {
                if(a[j] % (1 << Q[i]) == 0)
                {
                    a[j] += (1 << (Q[i] - 1));
                }
            }

        }
        for(auto x : a)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}