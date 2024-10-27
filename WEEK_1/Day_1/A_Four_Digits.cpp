#include <iostream>
#include <iomanip>  // For setw and setfill
using namespace std;

int main() {
    int N;
    cin >> N;

    // Use setw(4) to make it 4 digits and setfill('0') to add leading zeros
    cout << setw(4) << setfill('0') << N << endl;

    return 0;
}
/*
#include <iostream>
#include <string>  // For string manipulation
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the integer input

    // Convert the number to a string
    string result = to_string(n);

    // Prepend leading zeros
    while (result.length() < 4) {
        result = "0" + result;  // Add leading zeros
    }

    cout << result << endl;  // Print the final string
    return 0;
}

*/ 