#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll inversion(vector<int>&v, int n)
{
    ll inversion = 0, one = 0;
    for(int i=0; i<n; i++)
    {
        if(v[i] == 1)
        {
            one++;
        }
        else{
            inversion += one;
        }
    }
    return inversion;
}
ll max_inversion(vector<int>&v)
{
    int n = v.size();
    ll initial_inversion = inversion(v, n);

    int last_one = -1, first_zero = -1;
    for(int i=0; i<n; i++)
    {
        if(v[i] == 0 && first_zero == -1)
        {
            first_zero = i;
        }
        if(v[i] == 1)
        {
            last_one = i;
        }
    }

    ll maxInversion = initial_inversion;
    if(first_zero != -1)
    {
        v[first_zero] = 1;
        maxInversion = max(maxInversion, inversion(v,n));
        v[first_zero] = 0;
    }
    if(last_one != -1)
    {
        v[last_one] = 0;
        maxInversion = max(maxInversion, inversion(v,n));
        v[last_one] = 1;
    }
    return maxInversion;

}
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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        cout<<max_inversion(v)<<endl;
    }
    
    return 0;
}