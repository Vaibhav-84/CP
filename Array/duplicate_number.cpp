#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

int duplicate(vector<int>& nums){
    // for (int i = 0; i < nums.size()-1; i++)
    // {
    //     if (nums[i] == nums[i+1])
    //     {
    //         return nums[i]; 
    //     }
        
    // }

    // return 0;
    
    int slow = nums[0];
    int fast = nums[0];
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow!=fast);
    fast=nums[0];
    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main(){
    vector<int> arr{1, 3, 4, 6, 2, 5, 7, 7};
    // sort(arr.begin(), arr.end());
    int result = duplicate(arr);
    cout<<result;
    return 0;
}