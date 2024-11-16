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
        vector<int>v(n);
        for(int i=0;  i<n; i++) cin>>v[i];

        ll sum = 0;
        int cnt = 0;
        bool open = false;

        for(int num : v)
        {
            sum+=abs(num);
            if(num < 0 && !open)
            {
                cnt++;
                open = true;
            }
            if(num > 0)
            {
                open = false;
            }
        }
        cout<<sum<<" "<<cnt<<endl;
    }
    
    return 0;
}