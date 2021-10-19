#include<iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include<vector>
using namespace std;
//Moore voting Algo 
class matrix{
    public: 
    int majorityElement(vector<int>& nums){
        int count=0;
        int candi=0;
        for(int num:nums){
            if(count==0){
                candi=num;
            }
            if(num==candi){
                count+=1;
            }
            else{
                count -= 1;
            }
        }
        return candi;
    }
};

int main(){
    vector<int> v{5,5,5,5,7,5,5,5,7,7,1};
    matrix obj;
    cout<<obj.majorityElement(v);
    return 0;
}