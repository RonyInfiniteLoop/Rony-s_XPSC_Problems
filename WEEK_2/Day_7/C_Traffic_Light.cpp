#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       char c;
       cin>>c;
       string s;
       cin>>s;

       vector<int>green_pos;
       for(int i=0; i<n; i++)
       {
         if(s[i] == 'g') green_pos.push_back(i);
       }
       int max_wait = 0;
       
       if (c == 'g') 
       {
            cout << 0 << endl;
            continue;
       }


       for(int i=0; i<n; i++)
       {
          if(s[i] == c)
          {
                auto it = upper_bound(green_pos.begin(), green_pos.end(), i);
                int wait = 0;

                if(it != green_pos.end())
                {
                    wait = *it - i;
                }
                else {
                    wait = n - i + green_pos[0];
                }
                max_wait = max( max_wait, wait);
          }
       }
       cout<<max_wait<<endl;
    }
    
    
    return 0;
}