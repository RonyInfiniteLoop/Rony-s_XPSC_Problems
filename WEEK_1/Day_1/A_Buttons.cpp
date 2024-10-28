#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    
    int option1 = max(a, b) + (max(a, b) - 1);  
    int option2 = a + b;                        

   
    cout << max(option1, option2) << endl;

    return 0;
}
