#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to reverse the array
    void reverseArray(vector<int>& arr) {
        int j = arr.size() - 1;
        for (int i = 0; i < arr.size(); i++) {
            if (i > j) {
                break;
            } else {
                swap(arr[i], arr[j]);
                j--;
            }
        }
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Reverse the array
    sol.reverseArray(arr);

    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
