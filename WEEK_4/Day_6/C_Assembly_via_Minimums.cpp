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
        int m = (n*(n-1))/2;
        vector<ll>b(m);

        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }
        sort(b.begin(), b.end());
        int j=0;
        for(int i=n-1; i>0; i--)
        {
            cout<<b[j]<<" ";
            j+=i;
        }
        cout<<b.back()<<endl;
    }
    
    return 0;
}