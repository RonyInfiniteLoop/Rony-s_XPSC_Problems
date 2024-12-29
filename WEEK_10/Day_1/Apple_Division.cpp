#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    int n;
    cin >> n; 
    vector<ll> apples(n);

    for (int i = 0; i < n; i++) {
        cin >> apples[i];
    }

    ll totalWeight = accumulate(apples.begin(), apples.end(), 0LL);

    set<ll> possibleSums;
    possibleSums.insert(0); 

    for (int i = 0; i < n; i++) 
    {
        vector<ll> newSums;
        for (ll sum : possibleSums) 
        {
            newSums.push_back(sum + apples[i]);
        }
        for (ll newSum : newSums) {
            possibleSums.insert(newSum);
        }
    }

    ll bestSum = 0;
    for (ll sum : possibleSums) 
    {
        if (sum <= totalWeight / 2) 
        {
            bestSum = max(bestSum, sum);
        }
    }

    ll minDifference = abs(totalWeight - 2 * bestSum);
    cout << minDifference << endl;

    return 0;
}
