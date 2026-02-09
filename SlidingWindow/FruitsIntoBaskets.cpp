/*
Day 20 - Fruits Into Baskets
Topic: Sliding Window (At most 2 distinct)
Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> freq;
        int left = 0, maxLen = 0;

        for (int right = 0; right < fruits.size(); right++) {
            freq[fruits[right]]++;

            while (freq.size() > 2) {
                freq[fruits[left]]--;
                if (freq[fruits[left]] == 0)
                    freq.erase(fruits[left]);
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};