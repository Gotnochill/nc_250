#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        //edge case if container is empty
        if (height.empty()) return 0 ;

        int i = 0 , j = height.size()-1;
        int max = height[i] * height[j] ;

        while ( i < j){

            int curr = min(height[i] , height[j]) * (j-i+1) ;
            if (curr > max){
                max = curr;
            }

            if(height[i+1] > height[j-1]){
                i++;
            } else {
                j--;
            }
        }
            return max;
    }
};