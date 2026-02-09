/*
Day 20 - Maximum Number of Vowels in a Substring of Given Length
Topic: Sliding Window (Fixed Size)
Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o'|| c=='u';
    }
    int maxVowels(string s, int k) {
        int count=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i]))count++;
        }
        int maxCount=count;
        for(int i=k;i<s.size();i++){
            if(isVowel(s[i]))count++;
            if(isVowel(s[i-k]))count--;
            maxCount=max(maxCount,count);

        }
        return maxCount;
    }
};
