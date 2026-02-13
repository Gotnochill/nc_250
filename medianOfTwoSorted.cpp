#include<vector>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        //first we join the two together
        //use 2 pointers for each, shift the smaller one to a new vector

        int a = 0 , b = 0 ;
        int n1 = nums1.size();
        int n2 = nums2.size();

        int end = max(n1, n2);
        vector<int> mergedArray;

        //function to merge the two function
        for(int i=0 ; i < end ; i++){

            //3 cases total : both a and b are not in the end, or either is

            if (a < n1 && b < n2){
                if (nums1[a] > nums2[b]){
                    mergedArray.push_back(nums1[a]);
                    a++;
                } else {
                    mergedArray.push_back(nums2[b]);
                    b++;
                }
            }

            if (a < n1 && b == n2){
                mergedArray.push_back(nums1[a]);
                a++;
            }

            if (a == n1 && b < n2){
                mergedArray.push_back(nums2[b]);
                b++;
            }
        }

        int n1 = mergedArray.size();

        //there would be 2 middle elements
        if (n1 % 2 == 0){
            double medianVal = (mergedArray[(n1 / 2)-1] + mergedArray[(n1 / 2)]) / 2 ;
            return medianVal;

        } else {
            //this would have just one middle element which would be the median
            double medianVal = mergedArray[ (n1+1) / 2];
            return medianVal;
        }
    }
};