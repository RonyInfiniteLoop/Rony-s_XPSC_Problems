#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> database; 

    while (n--) 
    {
        string name;
        cin >> name;

        if(database.find(name) == database.end())
        {
            cout<<"OK"<<endl;
            database[name] = 0;
        }
        else{
            int count = ++database[name];
            string newName = name + to_string(count);

            cout<<newName<<endl;
            database[newName] = 0; 
        }
    }

    return 0;
}
