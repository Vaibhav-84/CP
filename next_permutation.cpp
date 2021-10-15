#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;


class matrix{
    public: 
    void nextPermutation(vector<int>& nums){
        int n=nums.size(), k, l;
        for ( k = n-2; k >=0; k--)
        {
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(l=n-1; l>k; l--){
                if(nums[l]>nums[k]){
                    break;
                }
            }
            swap(nums[l], nums[k]);
            reverse(nums.begin()+k+1, nums.end());
        }
        
    }
};

int main(){
    vector<int> v{1, 3, 5, 4, 2};
    matrix obj;
    obj.nextPermutation(v);
    for (int i = 0; i < v.size(); i++)
    {
            cout<<v[i];
    }
    
}