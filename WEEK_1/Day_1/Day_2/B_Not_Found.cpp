#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin>>S;

    vector<bool>letterpresent(26,false);

    for(char c : S)
    {
        letterpresent[c - 'a'] = true;
    }
    for(int i=0; i<26; i++)
    {
        if(!letterpresent[i])
        {
            cout<<char('a'+i)<<endl;
            return 0 ;
        }
    }
    cout<<"None"<<endl;
    
    return 0;
}