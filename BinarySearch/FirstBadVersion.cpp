/*
Day 22 - First Bad Version
Topic: Binary Search on Monotonic Condition
Time Complexity: O(log n)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int firstBadVersion(int n) {
    int low=0,high=n;
    while(low<high){
        int mid=low+(high-low)/2;
        if(isBadVersion(mid)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return low;
    }
};
// The API isBadVersion is defined for you.
bool isBadVersion(int version);
