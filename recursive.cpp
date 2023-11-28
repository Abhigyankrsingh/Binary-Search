#include <bits/stdc++.h>
using namespace std;

int rec(vector<int> &arr, int low, int high, int target) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (target == arr[mid])
        return mid;
    else if (target > arr[mid])
        return rec(arr, mid + 1, high, target);
    else
        return rec(arr, low, mid - 1, target);
}

int main() {
    // Sample usage:
    vector<int> nums = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;
    int result = rec(nums, 0, nums.size() - 1, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
