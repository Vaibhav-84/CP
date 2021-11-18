#include<bits/stdc++.h>
using namespace std;


void recurPermute(int index, vector<int> &v, vector<vector<int>> &ans){
    if(index==v.size()){
        ans.push_back(v);
        return;
    }

    for (int i = index; i < v.size(); i++)
    {
        swap(v[index], v[i]);
        recurPermute(index+1, v, ans);
        swap(v[index], v[i]);
    }
    
}


int main(){
    vector<int> v{1,2,3};
    vector<vector<int>> ans;
    recurPermute(0, v, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<",";
        }
    cout<<endl;
    }
    
    return 0;
}