// C++ program for illustration of swap() function
#include<bits/stdc++.h>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{1, 4, 7, 8, 10};
    vector<int> s{2, 3, 9};

    for(int i=0; i<v.size(); i++){
        if(v[i]>s[0]){
            swap(v[i], s[0]);
            sort(s.begin(), s.end());
        }
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;
    for(int i=0; i<s.size(); i++){
        cout<<s[i];
    }
    
    return 0;
}