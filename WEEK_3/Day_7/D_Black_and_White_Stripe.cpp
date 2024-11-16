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
       int n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       int w_cnt =0;
       for(int i=0; i<k; i++)
       {
            if(s[i] == 'W') w_cnt++;
       }
       int min_w = w_cnt;
       for(int i=k; i<n; i++)
       {
            if(s[i] == 'W') w_cnt++;
            if(s[i-k] == 'W') w_cnt--;//Remove the leftmost character
            min_w = min(min_w,w_cnt);
       }
       cout<<min_w<<endl;
    }
    
    
    return 0;
}