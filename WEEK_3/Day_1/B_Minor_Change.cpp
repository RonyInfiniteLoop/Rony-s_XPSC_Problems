#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b;
    cin>>a>>b;

    int cnt = 0;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i] != b[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    
    return 0;
}