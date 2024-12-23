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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int mismatch = 0;
        for(int i=0; i<n; i++)
        {
            if((v[i]-1)%k != i%k)
            {
                mismatch++;
            }
        }
        if(mismatch == 0)
        {
            cout<<0<<endl;
        }
        else if(mismatch == 2)
        {
            cout<<1<<endl;
        }
        else cout<<-1<<endl;
    }
    
    return 0;
}