#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin() , intervals.end());

        int i = 0 ;

        vector< vector<int> > res;

        while(i <= intervals.size()-1){

            int j = i ;
            while(intervals[i][1] > intervals[j+1][0]){

                res.push_back({ intervals[i][0] , max(intervals[j][1] , intervals[j+1][0]) });
                j++;
            }
            res.push_back(intervals[i][0] , intervals[i][1]);
            
        }
    }
};