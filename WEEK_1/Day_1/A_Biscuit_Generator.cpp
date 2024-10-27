#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b >> t;

    if (t < a) {
        cout << 0 << endl;
        return 0;
    } else {
        
        int x = ceil(t / a);  
        int biscuits = b * x;             
        
        cout << biscuits << endl;
    }

    return 0;
}
