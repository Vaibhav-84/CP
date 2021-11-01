#include<bits/stdc++.h>
using namespace std;

int minimum_platform(int a[], int d[], int n){
    sort(a, a+n);
    sort(d, d+n);

    int plat_needed = 1, result = 1;
    int i=1, j=0;

    while(i<n && j<n){
        if(a[i]<=d[j]){
            plat_needed++;
            i++;
        }
        else if(a[i]>d[j]){
            plat_needed--;
            j++;
        }
        if(plat_needed>result)
            result=plat_needed;
    }
    return result;
}

int main(){
    int a[] = {120, 50, 550, 200, 700, 850};
    int b[] = {600, 550, 700, 500, 900, 1000};
    cout<<minimum_platform(a, b, 6);
}