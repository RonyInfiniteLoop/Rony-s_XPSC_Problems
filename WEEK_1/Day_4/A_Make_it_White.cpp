#include<bits/stdc++.h>
using namespace std;
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
        string s;
        cin>>s;
        int max_w = 0;
        int cnt_l = 0;
        int cnt_r = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'W')
            {
                cnt_l++;
            }
            else{
                break;
            }
        }
        for(int i=n-1; i>0; i--)
        {
            if(s[i] == 'W')
            {
                cnt_r++;
            }
            else{
                break;
            }
        }
      
        max_w = cnt_l + cnt_r;
        
        cout<<n-max_w<<endl;
    }

    
    return 0;
}