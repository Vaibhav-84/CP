#include<iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include<vector>
using namespace std;

class matrix{
    public: 
    int stock(vector<int>& nums){
        int min= INT_MAX, best = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]< min){
                min = nums[i];
            }
            if(nums[i]-min>best){
                best = nums[i]-min;
            }
        }
        return best;
    }
};

int main(){
    vector<int> v{7, 1, 5, 3, 6, 4};
    matrix obj;
    int result = obj.stock(v);
    cout<<result;
    return 0;
}