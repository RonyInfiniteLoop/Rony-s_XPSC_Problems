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
        int x,y;
        cin>>x>>y;

        int screen_y = (y+1)/2;
        int remaining_cells = 15*screen_y - 4*y;

        int screen_x = max(0, x-remaining_cells);
        int extra_screens = (screen_x+14)/15;

        cout<<(screen_y+extra_screens)<<endl;

    }
    
    return 0;
}