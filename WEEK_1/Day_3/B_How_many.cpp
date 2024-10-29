#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int S, T;
    cin >> S >> T;

    int no_of_triples = 0;

    for (int a = 0; a <= S; a++) 
    {
        for (int b = 0; b <= S; b++) 
        {
            for (int c = 0; c <= S; c++) 
            {
                
                if (a + b + c <= S && a * b * c <= T) 
                {
                    no_of_triples++;
                }
            }
        }
    }

    cout << no_of_triples << endl;
    
    return 0;
}