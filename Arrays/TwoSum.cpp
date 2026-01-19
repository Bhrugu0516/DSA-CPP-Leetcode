#include<iostream>
#include<vector>
using namespace std;

class  Solution{
public:
      vector<int> twosum(vector<int>& num,int target){
        int n=num.size();
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(num[i]+num[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
      }

 
};