#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> num{1, 2, -4, 5 ,6};
    int curr = num[0];   
    int best = num[0];   
    for (int i = 1; i < num.size(); i++)
    {
        if (curr>0)
        {
            curr += num[i]; 
        }
        else{
            curr = num[i];
        }
        if(best<curr){
            best = curr;
        }
        
    }
    cout<<best;
    return 0;
}
