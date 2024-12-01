#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int res = 0; 
        for (int i = 0; i < n;) 
        {
            int j = i;

            while (j < n && s[j] != '1') {
                j++;
            }

            int len = j - i;

            int left = (i > 0 && s[i - 1] == '1') ? k : 0;
            int right = (j < n && s[j] == '1') ? k : 0;

            len = max(0, len - left - right);

            res += (len + k) / (k + 1);

            i = j + 1;
        }

        cout << res << endl;
    }

    return 0;
}
/*
Certainly! Let’s break down this specific part of the code:

```cpp
int left = (i > 0 && s[i - 1] == '1') ? k : 0;
int right = (j < n && s[j] == '1') ? k : 0;

len = max(0, len - left - right);
```

### 1. **Explanation of `left` and `right`**

In this part of the code, we're calculating the amount of "reserved" space at the **left** and **right** borders of the current segment of zeros. Here's how each of these works:

- **Left Reserved Space (`left`)**:
  ```cpp
  int left = (i > 0 && s[i - 1] == '1') ? k : 0;
  ```
  This line checks whether there is a `1` (an occupied table) just before the current segment of zeros. If there is a `1` at `s[i - 1]` (the table just before the segment starts), then we must reserve `k` positions at the left side of the current zero segment (because we cannot place anyone within `k` positions of a person already seated).
  
  - **Condition**: `(i > 0 && s[i - 1] == '1')`
    - `i > 0`: Ensures we are not out of bounds when checking `s[i - 1]`.
    - `s[i - 1] == '1'`: Checks if the table just before the current zero segment is occupied.
  - **Action**: If the condition is true, we set `left = k` (reserve `k` positions). Otherwise, we set `left = 0` (no need to reserve space).

- **Right Reserved Space (`right`)**:
  ```cpp
  int right = (j < n && s[j] == '1') ? k : 0;
  ```
  This line checks if there is a `1` (occupied table) just after the current segment of zeros. If there is a `1` at `s[j]` (the table just after the segment ends), then we need to reserve `k` positions on the right side of the current zero segment.
  
  - **Condition**: `(j < n && s[j] == '1')`
    - `j < n`: Ensures that `j` is within bounds (i.e., not out of range).
    - `s[j] == '1'`: Checks if the table just after the current segment is occupied.
  - **Action**: If the condition is true, we set `right = k` (reserve `k` positions). Otherwise, we set `right = 0` (no need to reserve space).

### 2. **Adjusting the Segment Length (`len`)**

Once we have the `left` and `right` reserved spaces, we update the length of the zero segment (`len`) using this line:

```cpp
len = max(0, len - left - right);
```

- **Purpose**: We want to adjust the segment length to account for the reserved spaces (those taken up by occupied tables). Specifically:
  - `len`: Initially represents the length of the segment of consecutive zeros.
  - We subtract `left` (reserved space on the left) and `right` (reserved space on the right) from the length of the zero segment.
  - We use `max(0, len - left - right)` because the segment length cannot be negative. So, if the reserved spaces reduce the length to a negative value, we set `len` to 0.

  **Example**:
  - If the current zero segment length is 6 (`len = 6`), and the left and right reserved spaces are both `1` (`left = 1`, `right = 1`), then:
    ```cpp
    len = max(0, 6 - 1 - 1) = max(0, 4) = 4
    ```
    The adjusted length of the segment will be 4.
  
  - If the zero segment length is 2 (`len = 2`), and both the left and right reserved spaces are 2 (`left = 2`, `right = 2`), then:
    ```cpp
    len = max(0, 2 - 2 - 2) = max(0, -2) = 0
    ```
    The adjusted length of the segment will be 0, meaning there is no space left to place people.

### Summary

- **`left` and `right`**: Determine the number of reserved spaces at the boundaries of the zero segment based on the nearby occupied tables.
- **`len`**: Adjusts the length of the current segment of zeros by subtracting the reserved spaces (`left` and `right`). If the reserved spaces are too large, the segment length becomes 0.

This approach ensures that we only consider valid free spaces where we can place people, respecting the minimum distance `k` between them.



*/