#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

bool binary_search(vector<ll>&v, ll q)
{
    int left=0, right= v.size()-1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(v[mid] == q)
        {
            return true;
        }
        else if(v[mid] < q)
        {
            left = mid + 1;
        }
        else right = mid-1;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    while(k--)
    {
        int q;
        cin>>q;
        if(binary_search(v,q)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}