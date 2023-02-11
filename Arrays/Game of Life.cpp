int liveNeighbours(vector<vector<int>> board, int i, int j)
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
                if (board[row][col] == 1)
                {
                    count++;
                }
            }
        }
    }
    return count;
}

void gameOfLife(vector<vector<int>> &board)
{
    int m = board.size();
    int n = board[0].size();

    vector<vector<int>> ans(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            int liveN = liveNeighbours(board, i, j);

            if (board[i][j] == 1 && (liveN == 2 || liveN == 3))
            {

                ans[i][j] = 1;
            }

            else if (board[i][j] == 0 && liveN == 3)
            {
                ans[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = ans[i][j];
        }
    }
}