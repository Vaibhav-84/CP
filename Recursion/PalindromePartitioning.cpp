#include<bits/stdc++.h>
using namespace std;
bool isPal(string s, int start, int end){
    while (start<=end){
        if (s[start++]!=s[end--])
        {
            return false;
        }
    }
    return true;
}

void fun(int ind, string s, vector<string> &path, vector<vector<string>> &res){
    if (ind == s.size())
    {
        res.push_back(path);
        return;
    }
    for (int i = ind; i < s.size(); i++)
    {
        if (isPal(s,ind, i))
        {
            path.push_back(s.substr(ind, i-ind+1));
            fun(i+1, s, path, res);
            path.pop_back();
        }
        
    }
    
}

int main(){
    vector<vector<string>> res;
    string s = "aabb";
    vector<string> path;
    fun(0, s, path, res);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout<<res[i][j]<<",";
        }
        cout<<endl;
    }
    
    return 0;
}
