#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int , int> mp1 , mp2 ;

        //move all the keys to individual hashmaps
        for(int i=0 ; i < nums1.size() ; i++){
            mp1[nums1[i]]++;
        }
        for(int i=0 ; i< nums2.size() ; i++){
            mp2[nums2[i]]++;
        }

        vector<int> resultArray;
        for(auto m : mp1){
            int key1 = m.first;
            int value1 = m.second;

            //looking for this key of mp1 in mp2
            if (mp2.find(key1) != mp2.end()){
                int value2 = mp2[key1];
                int minVal = min(value1 , value2);
                while(minVal--){
                    resultArray.push_back(key1);
                }
            }
        }
        sort(resultArray.begin() , resultArray.end());
        return resultArray;
    }
};