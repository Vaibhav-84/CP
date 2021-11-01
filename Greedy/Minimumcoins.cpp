#include<bits/stdc++.h>
using namespace std;


int mincoin(vector<int> v, int x){
    int count=0;
    int sum=0;
    for (int i = (v.size()-1); i >= 0; i--)
    {
        if (v[i]<=x){
            while (sum+v[i]<=x)
            {
                sum += v[i];
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> v{1,5,6,9,11};
    int x=11;
    cout<<mincoin(v, x);
    return 0;
}
