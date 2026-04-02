#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    for (int col = 0; col < n; col++)
                    {
                        if (matrix[i][col] != 0)
                        {
                            matrix[i][col] = -1;
                        }
                    }
                    for (int row = 0; row < m; row++)
                    {
                        if (matrix[row][j] != 0)
                        {
                            matrix[row][j] = -1;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == -1)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main()
{
    vector<vector<int>> matrix1 = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    vector<vector<int>> matrix2 = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    vector<vector<int>> matrix3 = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    Solution sol;
    sol.setZeroes(matrix1);
    for (auto val : matrix1)
    {
        for (auto v : val)
        {
            cout << v << " ";
        }
        cout << endl;
    }
}
