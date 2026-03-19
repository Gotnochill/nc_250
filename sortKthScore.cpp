#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        //j becomes k and then you sort is

        sort(score.begin() , score.end(), [&](auto const & a, auto const & b){
            return score[k] > b[k];
        });
        return score;
    }
};