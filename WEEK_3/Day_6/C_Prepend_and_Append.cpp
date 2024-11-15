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
        int size = n;
        int l=0, r=n-1;
        while(s[l] !=s[r] && size>0)
        {
            size-=2;
            l++;
            r--;
        }
        cout<<size<<endl;
    }
    return 0;
}