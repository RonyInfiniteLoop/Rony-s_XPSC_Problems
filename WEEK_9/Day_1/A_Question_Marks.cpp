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
        int n;cin>>n;
        string s;
        cin>>s;

        int cnt_A = count(s.begin(), s.end(), 'A');
        int cnt_B = count(s.begin(), s.end(), 'B');
        int cnt_C = count(s.begin(), s.end(), 'C');
        int cnt_D = count(s.begin(), s.end(), 'D');

        int score = min(n,cnt_A) + min(n,cnt_B) + min(n,cnt_C) + min(n,cnt_D);
        cout<<score<<endl;
    }
    
    return 0;
}