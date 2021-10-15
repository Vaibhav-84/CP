// C++ program for illustration of swap() function
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{0, 1, 1, 0, 2, 1, 2};
    int start=0, mid=0, end=v.size()-1;
    
    while(mid<=end){
        if(v[mid]==0){
            swap(v[mid], v[start]);
            mid++;
            start++;
        }
        else if(v[mid] == 1){
            mid++;
        }
        else{
            swap(v[mid], v[end]);
            end--;
        }
    }
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
