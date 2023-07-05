#include <iostream>
#include <vector>
using namespace std;

void printMatrix(const vector<vector<int> > &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void sortMatrixClockwise(vector<vector<int> > &matrix)
{
    int n = matrix.size();
    int rowStart = 0, rowEnd = n - 1;
    int colStart = 0, colEnd = n - 1;
    int num = 1;

    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        for (int i = colStart; i <= colEnd; i++)
        {
            matrix[rowStart][i] = num++;
        }
        rowStart++;

        for (int i = rowStart; i <= rowEnd; i++)
        {
            matrix[i][colEnd] = num++;
        }
        colEnd--;

        for (int i = colEnd; i >= colStart; i--)
        {
            matrix[rowEnd][i] = num++;
        }
        rowEnd--;

        for (int i = rowEnd; i >= rowStart; i--)
        {
            matrix[i][colStart] = num++;
        }
        colStart++;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int> > matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    sortMatrixClockwise(matrix);
    printMatrix(matrix);

    return 0;
}
