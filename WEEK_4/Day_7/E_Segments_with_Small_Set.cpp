#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int,int>freq;
    ll l=0,count=0,unique= 0;

    for(int r=0; r<n; r++)
    {
        freq[a[r]]++;  // Increment the count of the element a[r]
        if (freq[a[r]] == 1) unique++;  // If this is the first occurrence of a[r], increase the count of unique elements
        while (unique > k) {  // If the number of unique elements exceeds k, shrink the window from the left
        freq[a[l]]--;  // Decrease the count of the element a[l] (the element being removed from the window)
        if (freq[a[l]] == 0) unique--;  // If the count of a[l] becomes 0, it means it's no longer in the window, so decrease unique count
        l++;  // Move the left pointer to the right to shrink the window
        }
        count += (r - l + 1);  // Add the number of valid subarrays ending at r to the count

    }
    cout<<count<<endl;
   
    return 0;
}
