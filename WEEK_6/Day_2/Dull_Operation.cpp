// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         bool done = false;
//         for(ll i=0; i<=n; i++)
//         {
//             for(ll j =0; j<=n; j++)
//             {
//                 if(((i | j)*(i^j) == n))
//                 {
//                     cout<<j<<" "<<i<<endl;
//                     done =true;
//                     break;
//                 }
//             }
//             if(done) break;
//         }
//     }
    
//     return 0;
// }
//->>> This was giving time limit exit........
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
        ll n;
        cin>>n;
        cout<<n<<" "<<n-1<<endl;
    }
    
    return 0;
}