#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v{1,1,2,2,2,3,3,3,4,4,5};
    int i=0, j=1;
    while (j<v.size())
    {
        if(v[i]!=v[j]){
            i++;
            v[i]=v[j];
        }
        j++;
    }
    for(int num:v){
        cout<<num<<" ";
    }
    return 0;
}