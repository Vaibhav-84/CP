#include<iostream>
#include<vector>
#include <set>
#include <unordered_map>
using namespace std;

class Solution{
    public:
    int largestSubarray(vector<int>& nums){
        unordered_map<int, int> mpp;
        int maxi = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(sum == 0 ){
                maxi = i+1;
            }
            else {
                if(mpp.find(sum) != mpp.end()){
                    maxi = max(maxi, i-mpp[sum]);
                }
                else{
                    mpp[sum]=i;
                }
            }
        }
        return maxi;
    }
};

int main(){
    Solution s;
    vector<int> v{1, -1, 3, 2, -2, -3};
    cout<<s.largestSubarray(v);
    return 0;
}