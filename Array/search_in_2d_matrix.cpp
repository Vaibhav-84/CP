#include<iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include<vector>
using namespace std;

class matrix{
    public: 
    int find(vector<vector<int>>& nums, int x){
        int n=nums[0].size()-1;
        int i=0, j=n;
        
        while (i<=n && j>=0)
        {
            if(nums[i][j]==x){        
                cout<<i<<" "<<j;
                break;
            }
            else if(x<nums[i][j]){
                j--;
            }
            else{
                i++;
            }
        }
        return 0;
    }
};

int main(){
    matrix obj;
    vector<vector<int>> v{
                          {10, 20, 30},
                          {11, 21, 36},
                          {25, 29, 39}, 
                          };
    int x=39;
    obj.find(v, x);
    return 0;
}