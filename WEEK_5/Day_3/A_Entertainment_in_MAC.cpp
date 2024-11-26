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
        string r = s;
        reverse(r.begin(), r.end());
        cout<<min(s,r+s)<<endl;
    }
    
    return 0;
}