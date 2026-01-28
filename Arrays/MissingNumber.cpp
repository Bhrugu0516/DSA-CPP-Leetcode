/*
Problem: Missing Number

Approach:
- Numbers are from 0 to n
- Compute expected sum using formula
- Subtract actual sum of array

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

class MissingNum{
public:
       int Missing(vector<int>& nums){
        int n=nums.size();
        int actual=0;
        int total=(n*(n+1))/2;
        for(int i:nums){
            actual+=i;
        }
        return total-actual;
       }
};