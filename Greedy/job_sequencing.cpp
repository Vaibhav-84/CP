#include<bits/stdc++.h>

using namespace std;


struct job
{
    int id;
    int dl;
    int profite;
};

bool comparison(job a, job b){
    return (a.profite>b.profite);
}

pair<int, int> jobScheduling(job arr[], int n){
    sort(arr, arr+n, comparison);
    int maxi = arr[0].dl;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i].dl);
    }

    int slot[maxi+1];

    for (int i = 0; i < maxi; i++)
    {
        slot[i] = -1;
    }

    int countJobs = 0, jobProfit=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i].dl; j > 0; j--)
        {
            if (slot[j]==-1)
            {
                slot[j]=i;
                countJobs++;
                jobProfit+=arr[i].profite;
                break;
            }
            
        }
    }
    return make_pair(countJobs, jobProfit);
}

int main(){
    struct job j[]={
        {1,4,20},{2,5,60},{3,6,70},{4,6,65},{5,4,25},{6,2,80},{7,2,10},{8,2,22}};

    pair<int, int> res = jobScheduling(j, 8);
    cout<<res.first<<" "<<res.second;
}