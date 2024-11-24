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
        unordered_map<char,int>count;
        string result(n, ' ');
        char nextchar = 'a';

        for(int i=0; i<n; i++)
        {
            if(v[i] == 0)
            {
                result[i] = nextchar;
                count[nextchar]++;
                nextchar++;
            }
            else{
                for(auto[cha, cnt] : count)
                {
                    if(cnt == v[i])
                    {
                        result[i] = cha;
                        count[cha]++;
                        break;
                    }
                }
            }
        }
        cout<<result<<endl;
    }
    
    return 0;
}