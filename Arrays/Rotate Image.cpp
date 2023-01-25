// 48. Rotate Image

// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;


// Time complexity : O(N^2)
// Space complexity : O(N^2)

// void rotate(vector<vector<int>>& matrix) {
//         int n=matrix[0].size();
//         int cc = n-1;
//         vector<vector<int>> ans(n, vector<int>(n));

//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 ans[j][cc] = matrix[i][j];
//             }
//           cc--;
//         }

//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<ans[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }

// Time complexity : O(N^2)
// Space complexity : O(1)


void rotate(vector<vector<int>> &matrix)
{
    int n = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j)
            {
                continue;
            }

            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int s = 0, e = n - 1;
        while (s < e)
        {
            int temp = matrix[i][s];
            matrix[i][s] = matrix[i][e];
            matrix[i][e] = temp;
            s++;
            e--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> vec(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }

    rotate(vec);

    return 0;
}