#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;


vector<vector<int>> merging(vector<vector<int>>& v){
    vector<vector<int>> merge;
    if(v.size() == 0){
        return merge;
    }
    sort(v.begin(), v.end());
    vector<int> temp = v[0];
    for(auto it: v){
        if(it[0] <= temp[1]){
            temp[1] = max(it[1], temp[1]);
        }
        else{
            merge.push_back(temp);
            temp = it;
        }
    }
    merge.push_back(temp);
    return merge;
}

int main(){
    vector<vector<int>> v{{1, 2},{3, 6},{8, 9},{9, 11}};
    vector<vector<int>> re;
    re = merging(v);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout<<re[i][j]<<endl;
        }
    }
    return 0;
}

