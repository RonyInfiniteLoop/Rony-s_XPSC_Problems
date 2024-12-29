#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    // Step 1: Count the frequency of each character
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'A']++;
    }
    
    // Step 2: Check if a palindrome can be formed
    int oddCount = 0;  // To count how many characters have an odd frequency
    char oddChar = 0;  // To store the character with an odd frequency
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
            oddChar = i + 'A';
        }
    }
    
    // If more than one character has an odd frequency, a palindrome is not possible
    if (oddCount > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    
    // Step 3: Build the palindrome
    string firstHalf = "", secondHalf = "";
    
    for (int i = 0; i < 26; i++) {
        // Append half of the frequency of each character to the first half
        firstHalf += string(freq[i] / 2, i + 'A');
    }
    
    // The second half will be the reverse of the first half
    secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());
    
    // Step 4: Add the character with an odd frequency in the middle, if any
    if (oddCount == 1) {
        firstHalf += oddChar;
    }
    
    // Step 5: Combine the first half and the reversed second half to get the final palindrome
    cout << firstHalf + secondHalf << endl;
    
    return 0;
}