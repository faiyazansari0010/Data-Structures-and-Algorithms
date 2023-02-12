// 289. Game of Life

// The board is made up of an m x n grid of cells, where each cell has an initial state: live (represented by a 1) or dead (represented by a 0). Each cell interacts with its eight neighbors (horizontal, vertical, diagonal) using the following four rules (taken from the above Wikipedia article):

// Any live cell with fewer than two live neighbors dies as if caused by under-population.
// Any live cell with two or three live neighbors lives on to the next generation.
// Any live cell with more than three live neighbors dies, as if by over-population.
// Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.

// The next state is created by applying the above rules simultaneously to every cell in the current state, where births and deaths occur simultaneously. Given the current state of the m x n grid board, return the next state.

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int liveNeighbours(vector<vector<int>> &board, int i, int j)
{

    int count = 0;
    for (int row = i - 1; row <= i + 1; row++)
    {
        for (int col = j - 1; col <= j + 1; col++)
        {
            if (row < board.size() && col < board[0].size() && row >= 0 && col >= 0)
            {
                if (row == i && col == j)
                {
                    continue;
                }
                if (abs(board[row][col]) == 1)
                {
                    count++;
                }
            }
        }
    }
    return count;
}

// Time Complexity : O(m*n)
// Space Complexity : O(m*n)

// void gameOfLife(vector<vector<int>>& board) {
//     int m = board.size();
//     int n = board[0].size();

//     vector<vector<int>> ans(m, vector<int>(n, 0));

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){

//             int liveN = liveNeighbours(board, i, j);

//             if(board[i][j] == 1 && (liveN == 2 || liveN == 3)){

//                 ans[i][j] = 1;
//             }

//             else if(board[i][j] == 0 && liveN == 3){
//                 ans[i][j] = 1;
//             }
//         }
//     }

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             board[i][j] = ans[i][j];
//         }
//     }
// }

// Time Complexity : O(m*n)
// Space Complexity : O(1)

void gameOfLife(vector<vector<int>> &board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            int countLive = liveNeighbours(board, i, j);

            if (board[i][j] == 1 && (countLive < 2 || countLive > 3))
            {
                board[i][j] = -1;
            }

            if (board[i][j] == 0 && countLive == 3)
            {
                board[i][j] = 2;
            }
        }
    }

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == -1)
            {
                board[i][j] = 0;
            }
            if (board[i][j] == 2)
            {
                board[i][j] = 1;
            }
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> board(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }

    gameOfLife(board);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}