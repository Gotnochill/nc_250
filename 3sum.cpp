#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        for(int i = 0 ; i < nums.size() ; i++){

            int first = nums[i];
            int target = -first;
            unordered_set<int> seen;
            for(int j = i + 1 ; j < nums.size() ; j++){
                
                int second = nums[j];
                int third = target - second;
            }

        }
    }
};