/*
Day 28 - Top K Frequent Elements
Topic: Heap + HashMap

Idea:
- Count frequency using unordered_map
- Maintain min heap of size k based on frequency

Time Complexity: O(n log k)
Space Complexity: O(n)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;

        for(int n:nums){
            freq[n]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;
        for(auto &p:freq){
            minHeap.push({p.second,p.first});
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
        vector<int> result;
        while(!minHeap.empty()){
        result.push_back(minHeap.top().second);
        minHeap.pop();
        }
        return result;
    }
};