#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    set<pair<string,string>>uniqueleaves;

    for(int i=0; i<n; i++)
    {
        string species, leaves;
        cin>>species>>leaves;
        uniqueleaves.insert({species,leaves});
    }
    cout<<uniqueleaves.size()<<endl;
    return 0;
}