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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ones = 0;
        int zeros = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
               ones++;
            }
            else zeros++;
        }
        if(min(ones,zeros)%2==0) cout<<"Ramos"<<endl;
        else cout<<"Zlatan"<<endl;
    }
    
    return 0;
}