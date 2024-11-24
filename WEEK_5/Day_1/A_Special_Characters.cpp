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
        if(n%2 ==1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        string result ;
        for(int i=0; i<n/2; i++)
        {
            if(i%2==0)
            {
                result += "AA";
            }
            else{
                result += "BB";
            }
        }
        cout<<result<<endl;
        
    }
    
    return 0;
}