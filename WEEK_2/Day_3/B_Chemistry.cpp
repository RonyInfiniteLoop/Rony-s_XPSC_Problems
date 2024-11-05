#include<bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;
        map<char,int>freq;
        for(char c : s)
        {
            freq[c] += 1;
        }
        int odd_occur = 0;
        map<char,bool>freq_2;
        for(char c : s)
        {
            if(freq[c]%2!=0 && freq_2[c]!=true)
            {
               odd_occur++;
               freq_2[c] = true;
            }
        }
      if(odd_occur > (k+1)) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
    return 0;
}