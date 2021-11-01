#include<bits/stdc++.h>
using namespace std;


struct Item
{
    int value;
    int weight;
};
bool comp(Item a, Item b){
    double r1 = (double)a.value/(double)a.weight;
    double r2 = (double)b.value/(double)b.weight;
    return r1>r2;
}

double fractionalKnapsack(int w, Item arr[],int n){
    sort(arr, arr+n, comp);
    int curWeight=0;
    double finalvalue=0.0;

    for(int i=0; i<n; i++){
        if(curWeight+arr[i].weight<=w){
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }
        else{
            int remain = w-curWeight;
            finalvalue+= (arr[i].value/(double)arr[i].weight)*(double)remain;
            break;
        }
    }
    return finalvalue;
}

int main(){
    struct Item arr[]{{60, 10},{100, 20}, {120, 30}};
    int w=50;
    cout<<fractionalKnapsack(w, arr, 3);
    return 0;
}
