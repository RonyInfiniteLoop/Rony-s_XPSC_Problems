#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int closest_to_left(vector<ll>&v, ll q)
{
    int left = 0, right = v.size()-1, cnt = 0;
    while(left<=right)
    {
        int mid = (left+right)/2;

        if(v[mid] <= q)
        {
            cnt = mid+1;
            left = mid+1;
        }
        else right = mid-1;
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    while (k--)
    {
       int q;
       cin>>q;
       cout<<closest_to_left(v,q)<<endl;
    }
    
    
    return 0;
}