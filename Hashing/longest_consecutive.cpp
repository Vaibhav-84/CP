#include<iostream>
#include<vector>
#include <set>
using namespace std;


class Solution{
    public:
    int LongestConsecutive(vector<int>& nums){
        set<int> hashset;
        for(int num : nums){
            hashset.insert(num);
        }
        int longestStreak = 0;

        for(int num : nums){
            if (!hashset.count(num-1))
            {
                int currentNum = num;
                int currentStreak = 1;

                while (hashset.count(currentNum+1))
                {
                    currentNum += 1;
                    currentStreak += 1;
                }
                longestStreak = max(longestStreak, currentStreak);
            }  
        }
        return longestStreak;
    }
};

int main(){
    Solution s;
    vector<int> v{1,2,3,4,6,8};
    cout<<s.LongestConsecutive(v);
    return 0;
}

