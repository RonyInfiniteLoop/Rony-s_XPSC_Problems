#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S;
    cin >> S;

    // Array to keep track of the presence of each letter
    vector<bool> letterPresent(26, false);

    // Mark letters present in the string
    for (char c : S) {
        letterPresent[c - 'a'] = true;
    }

    // Find the lexicographically smallest letter that is missing
    for (int i = 0; i < 26; ++i) {
        if (!letterPresent[i]) {
            cout << char('a' + i) << endl;
            return 0;
        }
    }

    // If all letters are present
    cout << "None" << endl;
    return 0;
}
