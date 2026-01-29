/*
Day 11 - Best Time to Buy and Sell Stock

Pattern: One-pass Greedy
Idea:
- Track minimum price so far
- Update max profit at each step

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuy=INT_MAX;
        int profit=0;
        for(int price:prices){
            minBuy=min(minBuy,price);
            profit=max(profit,price-minBuy);
        }
        return profit;
    }
};