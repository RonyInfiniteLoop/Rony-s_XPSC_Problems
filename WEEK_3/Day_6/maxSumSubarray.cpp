#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int maxSumSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    if (n < k) return -1; // Handle edge cases

    // Compute initial window sum
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Slide the window across the array
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k]; // Slide window
        maxSum = max(maxSum, windowSum); // Update max
    }

    return maxSum;
}

int main() {
    vector<int> arr = {100, 200, 300, 400};
    int k = 2;
    cout << "Maximum sum of subarray of size " << k << ": " << maxSumSubarray(arr, k) << endl;
    return 0;
}