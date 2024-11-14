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
        vector<vector<int>>sequence(n,vector<int>(n-1));
        unordered_map<int,int>count;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                cin>>sequence[i][j];
            }
            count[sequence[i][0]]++;
        }
        int x=-1, y=-1;
        for(auto &pair : count)
        {
            if(pair.second == n-1)
            {
                x = pair.first;
            }
            else if(pair.second == 1)
            {
                y = pair.first;
            }
        }
        vector<int>permutation;
        permutation.push_back(x);
        permutation.push_back(y);

        for(int i=0; i<n; i++)
        {
            if(sequence[i][0] == y)
            {
                for(int j=1; j<n-1; j++)
                {
                    permutation.push_back(sequence[i][j]);
                }
                break;
            }
        }
        for(int num : permutation)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}