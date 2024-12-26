#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
ll exp(ll a, ll b)
{
    ll result = 1;
    a = a%MOD;

    while (b>0)
    {
        if(b%2 !=0)
        {
            result = (result*a)%MOD;
        }
        a = (a*a)%MOD;
        b = b/2;
    }
    return result;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        long long a, b;
        cin >> a >> b;

        if (a == 0 && b == 0) 
        {
            cout << 1 << endl;
        } 
        else {
            cout << exp(a, b) << endl;
        }

    }
    
    return 0;
}