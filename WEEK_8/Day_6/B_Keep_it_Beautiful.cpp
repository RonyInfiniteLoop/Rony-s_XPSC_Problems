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
        vector<int>a;
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;

            int new_cnt = cnt + (a.size()>0  && a.back()>x);

            if(new_cnt == 0 || (new_cnt == 1 && x <= a[0]))
            {
                a.push_back(x);
                cnt = new_cnt;
                cout<<1;
            }
            else cout<<0;

        }
        cout<<endl;
    }
    
    return 0;
}