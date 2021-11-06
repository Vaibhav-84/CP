#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int repeat, missing;

    void findthenumber(vector<int> v){

        int xor_v=0;
        int xor_d=0;
        for (int i = 0; i < v.size(); i++)
        {
            xor_v = xor_v ^ v[i];
            xor_d = xor_d ^ i+1;
        }
        
        int a = xor_v ^ xor_d;
        cout<<a;
    }
};

int main(){
    Solution sl;
    vector<int> v{1,2,3,4,1,6};
    sl.findthenumber(v);
    return 0;
}


// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main()
// {
// 	int arr[] = { 4, 3, 6, 2, 1, 1 };
// 	int n = 6;
	
// 	unordered_map<int, bool> numberMap;
	
// 	for(int i : arr)
// 	{
// 		if (numberMap.find(i) ==
// 			numberMap.end())
// 		{
// 			numberMap[i] = true;
// 		}
// 		else
// 		{
// 			cout << "Repeating = " << i;
// 		}
// 	}
// 	cout << endl;
	
// 	for(int i = 1; i <= n; i++)
// 	{
// 		if (numberMap.find(i) ==
// 			numberMap.end())
// 		{
// 			cout << "Missing = " << i;
// 		}
// 	}
// 	return 0;
// }

// // This code is contributed by RohitOberoi
