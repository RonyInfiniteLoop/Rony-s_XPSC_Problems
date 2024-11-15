#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }

        int mx = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {   
                int now = 0;
                //top_left
                int ci=i, cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m)
                {
                    now += a[ci][cj];
                    ci--;
                    cj--;
                }
                //top_right
                ci=i, cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m)
                {
                    now += a[ci][cj];
                    ci--;
                    cj++;
                }
                //down_left
                ci=i, cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m)
                {
                    now += a[ci][cj];
                    ci++;
                    cj--;
                }
                //down_right
                ci=i, cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m)
                {
                    now += a[ci][cj];
                    ci++;
                    cj++;
                }
                now-=(a[i][j]*3);
                mx = max(mx,now);
            }
        }
        cout<<mx<<endl;
    }
    
    return 0;
}