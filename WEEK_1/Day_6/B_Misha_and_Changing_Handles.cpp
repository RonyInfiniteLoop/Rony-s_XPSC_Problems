#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    map<string, string>ans,has;
    for(int i=1; i<=n; i++)
    {
        string old_h, new_h;
        cin>>old_h>>new_h;

        if(has.find(old_h) != has.end())
        {
            string s = has[old_h];
            ans[s] = new_h;
            has.erase(old_h);
            has[new_h] = s;
        }
        else{
            ans[old_h] = new_h;
            has[new_h] = old_h;
        }
            
        // ans:->
        // misha = IloveCodeforces

        // has:->
        // ILoveCodeforces = MikeMirzayanov

    }
    cout<<ans.size()<<endl;
    for(auto[x,y] : ans)
    {
        cout<<x<<" "<<y<<endl;
    }


    
    return 0;
}