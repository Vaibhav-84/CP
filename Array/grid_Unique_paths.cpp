#include<iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include<vector>
using namespace std;

class matrix{
    public: 
    int countPaths(int n, int m){
        int N=n+m-2;
        int r=m-1;
        double res = 1;
        for (int i = 1; i <= r; i++)
        {
            res = res*(N-r+i)/i;
            // cout<<res<<endl;
        }
        return (int)res;
    } 
};

int main(){
    matrix obj;
    cout<<obj.countPaths(2, 3);
    return 0;
}