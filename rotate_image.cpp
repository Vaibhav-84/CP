#include<iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include<vector>
using namespace std;

class matrix{
    public: 
    void reverse_matrix(vector<vector<int>>& nums){
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(nums[i][j], nums[j][i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            reverse(nums[i].begin(), nums[i].end());
        }   
    }
};

int main(){
    vector<vector<int>> v{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    matrix obj;
    obj.reverse_matrix(v);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}