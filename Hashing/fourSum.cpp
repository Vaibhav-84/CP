#include<iostream>
#include<vector>
using namespace std;


class Solution{
    public:
    vector<vector<int>> fourSum(vector<int>& num, int target){
        vector<vector<int>> res;
        if(num.empty())
            return res;
        int n=num.size();
        // sort(num.begin(),num.end());
        for (int i = 0; i < n; i++)
        {
            for (int j =i+1 ; j < n; j++)            {
                int target_2 = target - num[j] - num[i];
                int front = j+1;
                int back = n-1;
                while (front<back)
                {
                    int two_sum = num[front]+num[back];
                    if(two_sum<target_2) front++;
                    else if(two_sum>target_2) back--;
                    else{
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = num[i];
                        quadruplet[1] = num[j];
                        quadruplet[2] = num[front];
                        quadruplet[3] = num[back];
                        res.push_back(quadruplet);

                        while (front<back && num[front]==quadruplet[2])
                        {
                            ++front;
                        }
                        while (front<back && num[back]==quadruplet[3])
                        {
                            --back;
                        }
                    }
                }
                while(j+1<n && num[j+1] == num[j]) ++j;
            }
                while(i+1<n && num[i+1] == num[i]) ++i;
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<int> v{1, 1, 1 ,2 ,2 ,3 ,3 ,4 ,4 ,4};
    int target = 9;
    vector<vector<int>> result;
    result=s.fourSum(v, target);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout<<result[i][j];
        }
        cout<<endl;
    }
    return 0;
}

