#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int n, m;
        cin>>n>>m;

        string s;
        cin>>s;

        map<int, int> ind;
        for(int i=0; i<m; i++)
        {
            int a;
            cin>>a;
            ind[a]++;
        }
        string c;
        cin>>c;

        sort(c.begin(), c.end());
        int j=0;

        for(int i=0; i<n; i++)
        {
            if(ind.find(i+1) != ind.end())
            {
                s[i] = c[j];
                j++;
            }
        }
        cout<<s<<endl;
    }
    
    return 0;
}