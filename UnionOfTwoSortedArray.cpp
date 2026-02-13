#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        
        map<int, int> mp;
        for(int i=0 ; i<nums1.size() ; i++){
            mp[nums1[i]]++;
        }
        for(int i=0 ; i<nums2.size() ; i++){
            mp[nums2[i]]++;
        }

        vector<int> mergedArr;
        for(auto m : mp){
            int key = m.first;
            mergedArr.push_back(key);
        }

        return mergedArr;
    }
};