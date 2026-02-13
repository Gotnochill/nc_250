#include<bits/stdc++.h>
using namespace std;

int primeCheck(int sum){

    int isPrime = 0 ;
    if (sum <=1){
        isPrime = 0 ;
    } else if (sum == 2){
        isPrime = 1;
    } else {
        for(int i=2; i<=sqrt(sum); i++){
            if (sum % i == 0){
                isPrime = 0 ;
                break;
            } else {
                isPrime = 1 ;
            }
        }
    }

    if(isPrime == 1){
        return 1;
    } else {
        return 0 ;
    }
}

int main(){

    int t; cin>>t;
    while(t--){

        int n; cin>>n;
        int A[n];
        int pairCount = 0 ;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int sum = A[i]+A[j];
                int check = primeCheck(sum);
                if(check == 1){
                    pairCount++;
                } else {
                    continue;
                }
            }
        }
    }
}