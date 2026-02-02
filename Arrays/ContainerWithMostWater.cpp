/*
Day 15 - Container With Most Water

Pattern: Two Pointers / Greedy
Idea:
- Area = min(height[left], height[right]) * width
- Move the pointer with smaller height

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
    int maxwater=0;
    int left=0;
    int n=height.size();
    int right=n-1;
    while(left<right){
        int h=min(height[left],height[right]);
        int w=right-left;
        int area=h*w;
        maxwater=max(maxwater,area);
        if(height[left]>height[right]){
            right--;
        }
        else{
            left++;
        }

    }
    return maxwater;
    }
};