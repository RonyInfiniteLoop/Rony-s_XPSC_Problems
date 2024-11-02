#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, string> ip_to_name;

    for (int i = 0; i < n; ++i) 
    {
        string name, ip;
        cin >> name >> ip;
        ip_to_name[ip] = name; 
    }

    for (int i = 0; i < m; ++i) 
    {
        string command, ip_with_semicolon;
        cin >> command >> ip_with_semicolon;

        string ip = ip_with_semicolon.substr(0, ip_with_semicolon.size() - 1);

        cout << command << " " << ip_with_semicolon << " #" << ip_to_name[ip] << '\n';
    }

    return 0;
}
