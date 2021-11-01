#include <bits/stdc++.h>
using namespace std;

class water{
    public:
    int trapped_water(vector<int> a){
        int l = 0, r = a.size()-1;
        int lm=0, rm=0, res=0;
        while (l<=r)
        {
            if(a[l]<=a[r]){
                if(a[l]>=lm){
                    lm = a[l];
                }
                else{
                    res+= lm-a[l];
                }
                l++;
            }
            else{
                if(a[r]>=rm){
                    rm = a[l];
                }
                else{
                    res+=rm-a[r];
                }
                r--;
            }
        }
        

        return res;
    }
};


int main(){
    vector<int> v{0,1,0,2,1,0,1,3,2,1,2,1};
    water obj;
    cout<<obj.trapped_water(v);
    return 0;
}