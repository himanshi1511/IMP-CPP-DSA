/*
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
*/

#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& nums) {
    int n = nums.size();
    int left = 0, right = n - 1;
    int maxLeft = 0, maxRight = 0;
    int ans = 0;

    while (left <= right) {
        if (nums[left] <= nums[right]) {
            if (nums[left] >= maxLeft) {
                maxLeft = nums[left];
            } else {
                ans += maxLeft - nums[left];
            }
            left++;
        } else {
            if (nums[right] >= maxRight) {
                maxRight = nums[right];
            } else {
                ans += maxRight - nums[right];
            }
            right--;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n); // Define the vector with size n
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // Corrected input to directly store in vector
    }

    int ans = trap(v);
    cout << ans << endl;

    return 0;
}
