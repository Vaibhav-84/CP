#include<bits/stdc++.h>
using namespace std;

void subset_sum(int ind, int sum, vector<int> &arr, int N, vector<int> &sumSubset){
    if(ind==N){
        sumSubset.push_back(sum);
        return;
    }
 
    //pick the element
    subset_sum(ind+1, sum+arr[ind], arr, N, sumSubset);

    //Do-not pick the element 
    subset_sum(ind+1, sum, arr, N, sumSubset);
}

int main(){
    vector<int> v{1,3,2};
    vector<int> res;
    subset_sum(0, 0, v, 3, res);
    for(int i : res){
        cout<<i<<endl;
    }

    return 0;
}