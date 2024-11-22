#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ;
    cin>> t;
    while (t--)
    {
        int n, c;
        cin>>n>>c;
        vector<ll>teleporter(n);
        for(int i=0; i<n; i++)
        {
            cin>>teleporter[i];
        }
        vector<ll>total_cost;
        for(int i=0; i<n; i++)
        {
            int cost = (i+1) + teleporter[i];
            total_cost.push_back(cost);
        }
        sort(total_cost.begin(), total_cost.end());

        int no_of_teleporter = 0;
        for(int v : total_cost)
        {
            if(c<0) break;
            if(c >= v)
            {
                c = c-v;
                if(c>=0) no_of_teleporter++;
            }
        }
        cout<<no_of_teleporter<<endl;
    }
    
    
    return 0;
}