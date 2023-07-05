#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int> > A(6, std::vector<int>(6));
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cin >> A[i][j];
        }
    }

    int maxSum = -9999; 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int sum = A[i][j] + A[i][j + 1] + A[i][j + 2] +
                      A[i + 1][j + 1] +
                      A[i + 2][j] + A[i + 2][j + 1] + A[i + 2][j + 2];

            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }

    std::cout << maxSum << std::endl;

    return 0;
}
