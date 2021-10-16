#include<iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include<vector>
using namespace std;

class matrix{
    public: 
    double power(double x, int n){
        long long nn = n;
        if(nn==0){
            return 1;
        }
        if(nn%2==1){
            return x*power(x, n-1);
        }
        else{
            return power(x*x, nn/2);
        }
        return 0;
    }
};

int main(){
    int x=2,n=5;
    matrix obj;
    cout<<obj.power(x, n);
    return 0;
}