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
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        if(is_sorted(v.begin(), v.end()))
        {
            cout<<"Yes"<<endl;
            continue;
        }

        bool possible = false;
        for(int i=0; i<n; i++)
        {
            rotate(v.begin(), v.begin()+1, v.end());
            if(is_sorted(v.begin(), v.end()))
            {
                possible = true;
                break;
            }
        }
        if(possible){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    
    return 0;
}