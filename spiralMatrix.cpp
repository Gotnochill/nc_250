#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        // right -> bottom -> left -> top

        vector< int > ans;

        int m = matrix.size(); //rows
        int n = matrix[0].size(); //columns

        int top = 0 , left = 0 ;
        int bottom = n - 1 , right = m - 1;

        while(top <= bottom && left <= right){
            //right
        for(int i = left ; i <= right ; i++){
            ans.push_back(matrix[top][i]);
        }
        top++;

        //bottom
        for(int i = top ; i <= bottom ; i++){
            ans.push_back(matrix[right][i]);
        }
        right--;

        //left
        if (top <= bottom){
            for(int i = right; i >= left ; i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        //top
        if (left <= right){
            for(int i = bottom ; i >= top ; i--){
                ans.push_back(matrix[i][left]);
            }

            left++;
            }
        }
        return ans;  
    }


};