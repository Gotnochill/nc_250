#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        intervals.push_back(newInterval);

        sort(intervals.begin() , intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);

        int i = 0 ;
        while(i < intervals.size() && j < intervals.size() ){

            int j = i + 1; 
            if (intervals[i][1] > intervals[j][0]){
                intervals[i][1] = max (intervals[i][1] , intervals[j][1]);
                j++;
            } else {
                res.push_back(intervals[i]);
                i++;
            }
        }
    }
};