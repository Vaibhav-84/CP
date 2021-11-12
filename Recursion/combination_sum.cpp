#include<bits/stdc++.h>
using namespace std;

void combination(int ind ,int target, vector<vector<int>> &res, vector<int> &ds, vector<int> pas){
    if (ind == pas.size())
    {
       if(target == 0){
       res.push_back(ds);
       } 
        return;
    }
   
    if(pas[ind]<=target){
        ds.push_back(pas[ind]);
        combination(ind, target-pas[ind], res, ds, pas);
        ds.pop_back();
    }
    combination(ind+1, target, res, ds, pas);
}


int main(){
    vector<vector<int>> res; 
    vector<int> ds; 
    vector<int> pas{2,3,6,7};

    combination(0, 7 ,res, ds, pas);

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout<<res[i][j];
        }
        cout<<endl;
    }
    
}