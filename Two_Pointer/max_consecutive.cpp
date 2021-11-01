#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v{1,1,0,1,1,1,1,1,1,0,0,0,0};
    int i=0, j=1;
    int count=1, res=0;
    while (j<v.size())
    {
        if (v[i]!=v[j])
        {
            count=1;
            i=j;
            j++;
        }
        else{
            count++;
            j++;
            res = max(res, count);
        }

    }
    cout<<res;
    return 0;
}


