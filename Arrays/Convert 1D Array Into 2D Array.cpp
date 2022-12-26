// 2022. Convert 1D Array Into 2D Array

// You are given a 0-indexed 1-dimensional (1D) integer array original, and two integers, m and n.
// You are tasked with creating a 2-dimensional (2D) array with  m rows and n columns using all the elements from original.

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

// vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
//     vector<vector<int>> ans;
//     int len = original.size();

//     if(m*n != len){
//         return ans;
//     }

//     vector<int> row;
//     int j=0;

//     for(int i=0;i<len;i++){
//         row.push_back(original[i]);

//         if(row.size() == n){
//             ans.push_back(row);
//             row.clear();
//         }
//     }
//     return ans;
// }

vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
{
    vector<vector<int>> ans(m, vector<int>(n));
    int len = original.size();

    if (m * n != len)
    {
        ans.clear();
        return ans;
    }

    int k = 0;
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {

            ans[i][j] = original[k++];
        }
    }
    return ans;
}

int main()
{
    int m, n, size;
    cin >> m >> n >> size;
    vector<int> nums(size);

    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    vector<vector<int>> ans = construct2DArray(nums, m, n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}