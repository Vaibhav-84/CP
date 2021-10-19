#include<iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include<vector>
using namespace std;
//Moore voting Algo 
class matrix{
    public: 
    void majorityElement(vector<int>& nums){
        int c1=0,c2=0;
        int num1=-1;
        int num2=-1;
        for(int el:nums){
            if(el==num1){
                c1++;
            }
            else if(el==num2){
                c2++;
            }
            else if(c1==0){
                num1=el;
            }
            else if(c2==0){
                num2=el;
            }
            else{
                c1--;
                c2--;
            }
        }

        int check1=0, check2=0;
        for (int el : nums)
        {
            if(el==num1){
                check1++;
            }
            if(el==num2){
                check2++;
            }
        }
        int temp =(nums.size())/3;
        if(check1>temp && check2>temp){
            cout<<num1<<" "<<num2;
        }
        else if(check1>temp){
            cout<<num1;
        }
        else if(check2>temp){
            cout<<num2;
        }
        else{
            cout<<"Not found";
        }

    }
};

int main(){
    vector<int> v{1, 1, 1, 3, 3, 2, 5, 2};
    matrix obj;
    obj.majorityElement(v);
    return 0;
}