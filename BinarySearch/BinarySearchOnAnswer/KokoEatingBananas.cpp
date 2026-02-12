/*
Day 23 - Koko Eating Bananas
Topic: Binary Search on Answer
Time Complexity: O(n log m)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canFinish(vector<int>& piles,int k,int h){
        long long hours=0;
        for(int banana:piles){
            hours+=(banana+k-1)/k;
        }
        return hours<= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
    int low=1,high=*max_element(piles.begin(),piles.end());
    int ans=high;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(canFinish(piles,mid,h)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
    }
};