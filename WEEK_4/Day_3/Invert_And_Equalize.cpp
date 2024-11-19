#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--)
    {
       int n;cin>>n;
       cin.ignore();

       string s;
       cin>>s;
       int cnt = 0;

       for(int i=0; i<n; i++)
       {
            if(s[i] != s[i+1]) cnt++;
       }
       cout<<cnt/2<<endl;

    }
    
    
    return 0;
}
// I can also  try this.........

/*
    while(i<n)
    {
        if(s[i] == '0')
        {
            cnt0++;
            while(s[i] == '0')
            {
                i++;
            }
            else{
                cnt1++;
                while(s[i] == '1')
                {
                    i++;
                }
            }
        }
    }
    cout<<min(cnt0,cnt1)<<endl;

*/