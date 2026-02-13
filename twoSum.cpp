#include<bits/stdc++.h>
using namespace std;

vector<int> inputValue(){

    int n; 
    cout<<"Enter the number of values you need in the array: \n";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the values of the array: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    return arr;
}