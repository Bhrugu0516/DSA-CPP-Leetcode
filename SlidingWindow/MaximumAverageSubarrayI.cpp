/*
Day 19 - Maximum Average Subarray I

Topic: Sliding Window (Fixed Size)
Approach:
- Calculate sum of first k elements
- Slide the window by adding next element and removing previous
- Track maximum sum and compute average

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowSum = 0;
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }
        double maxSum = windowSum;

        for (int i = k; i < nums.size(); i++) {
            windowSum += nums[i];
            windowSum -= nums[i - k];
            maxSum = max(maxSum, windowSum);
        }

        return maxSum / k;
    }
};
