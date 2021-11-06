#include<bits/stdc++.h>
using namespace std;

void findSubsets(int ind, vector<int> &v, vector<int> &ds, vector<vector<int>> &ans){
    ans.push_back(ds);
    for(int i=ind; i<v.size(); i++){
        if(i!=ind && v[i] == v[i-1]) continue;
        ds.push_back(v[i]);
        findSubsets(i+1, v, ds, ans);
        ds.pop_back();
    }
}

int main(){
    vector<int> v{1,2,2,2,3,3};
    vector<vector<int>> ans;
    vector<int> ds;
    sort(v.begin(),v.end());
    findSubsets(0, v, ds, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j];
        }
        cout<<"next"<<endl;
    }
    
    return 0;
}