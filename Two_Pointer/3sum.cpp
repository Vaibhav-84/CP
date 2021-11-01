#include <bits/stdc++.h>
#include<vector>

using namespace std;

vector<vector<int>> threesum(vector<int> arr,int target){
    if(arr.size() <= 2) 
        return {};

    sort(arr.begin(),arr.end());
    vector<vector<int>> res;
    for(int i=0; i<arr.size()-2; i++){
        if (i==0 || arr[i-1]!=arr[i])
        {
            int j=i+1, k=arr.size()-1, sum=target-arr[i];
            while(j<k){
                if (arr[j]+arr[k]==sum)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    res.push_back(temp);
                    while (j<k && arr[j]==arr[j+1]) j++;
                    while (j<k && arr[k]==arr[k-1]) k--;
                    
                    j++;
                    k--;
                }
                else if(arr[j]+arr[k]<sum) j++;
                else k--;
                
            }
        }
    }
    return res;
}


int main(){
    vector<int> v{-1,-1,0,1,2,-1,-4};
    int target=0;
    vector<vector<int>> vect = threesum(v, target);

    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }   
        cout << endl;
    }
    
    return 0;
}