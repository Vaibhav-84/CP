#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;


class matrix{
    public: 
    void set_matrix_zeros(vector<vector<int>>& matrix){
        int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

        for (int i = 0; i < rows; i++)
        {
            if(matrix[i][0]==0) col0=0;
            for (int j = 1; j < cols; j++)
            {
                if(matrix[i][j]==0){
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        for (int i = rows-1; i >= 0; i--){
            for (int j = cols-1; j >= 1; j--)
            {
                if (matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
            if (col0 == 0)
            {
                matrix[i][0]=0;
            }
        }
    }
};

int main(){
    vector<vector<int>> v{{1,1,1,1},{1,0,1,1},{1,1,0,1},{0,0,0,1}};
    matrix obj;
    obj.set_matrix_zeros(v);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
    
}