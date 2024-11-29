#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to reverse a part of the array
    void reverse_arr(vector<int>& arr, int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    // Function to rotate the array by d elements
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n; // Handle cases where d >= n
        reverse_arr(arr, 0, d - 1);  // Reverse the first part
        reverse_arr(arr, d, n - 1); // Reverse the second part
        reverse_arr(arr, 0, n - 1); // Reverse the entire array
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Rotate the array
    sol.rotateArr(arr, d);

    cout << "Rotated array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
