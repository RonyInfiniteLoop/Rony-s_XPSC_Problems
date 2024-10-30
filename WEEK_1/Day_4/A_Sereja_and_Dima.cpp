#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> d;
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        d.push_back(x);
    }

    int sereja = 0, dima = 0;
    bool serejaTurn = true; // Track turns

    while (!d.empty()) 
    {
        int chosenCard;
        if (d.front() >= d.back()) 
        {
            chosenCard = d.front();
            d.pop_front();
        } 
        else 
        {
            chosenCard = d.back();
            d.pop_back();
        }

        // Add to the current player's score
        if (serejaTurn) 
        {
            sereja += chosenCard;
        } 
        else 
        {
            dima += chosenCard;
        }

        // Switch turns
        serejaTurn = !serejaTurn; //If serejaTurn is true, 
        //this line changes it to false for the next iteration, 
        //switching the turn to Dima.
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
