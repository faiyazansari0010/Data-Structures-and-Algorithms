// 54. Spiral Matrix

// Given an m x n matrix, return all elements of the matrix in spiral order.

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{

    int row_start = 0;
    int row_end = matrix.size() - 1;
    int col_start = 0;
    int col_end = matrix[0].size() - 1;

    vector<int> ans;

    while (row_start <= row_end and col_start <= col_end)
    {

        for (int i = col_start; i <= col_end; i++)
        {
            ans.push_back(matrix[row_start][i]);
        }
        row_start++;

        for (int i = row_start; i <= row_end; i++)
        {
            ans.push_back(matrix[i][col_end]);
        }
        col_end--;

        if (row_start <= row_end)
        {
            for (int i = col_end; i >= col_start; i--)
            {
                ans.push_back(matrix[row_end][i]);
            }
        }
        row_end--;

        if (col_start <= col_end)
        {
            for (int i = row_end; i >= row_start; i--)
            {
                ans.push_back(matrix[i][col_start]);
            }
        }
        col_start++;
    }

    return ans;
}

int main()
{
    // Vector of vectors
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++)
    {
        // Create a vector
        vector<int> row;
        for (int j = 0; j < m; j++)
        {
            int value;
            cin >> value;
            row.push_back(value);
        }
        // Push the row in matrix
        matrix.push_back(row);
    }

    vector<int> ans = spiralOrder(matrix);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}