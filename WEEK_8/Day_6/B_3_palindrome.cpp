#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    string pattern = "aabb";
    string result = "";

    for (int i = 0; i < n; ++i) 
    {
        result += pattern[i % 4]; 
    }

    cout << result << endl;
    return 0;
}
