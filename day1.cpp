#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int>& arr) {
        if (arr.size() < 2) return -1;

        int largest = INT_MIN, secondLargest = INT_MIN;

        for (int num : arr) {
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num != largest) {
                secondLargest = num;
            }
        }

        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 1) {
        cout << "Array size must be at least 1." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = sol.getSecondLargest(arr);

    if (result == -1) {
        cout << "The second largest element does not exist." << endl;
    } else {
        cout << "The second largest element is: " << result << endl;
    }

    return 0;
}
