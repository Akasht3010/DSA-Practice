#include <iostream>
#include <string>

void printPattern(int n)
{
    if (n < 1)
    {
        return;
    }
    int width = (n * 2) - 1;
    for (int i = n; i >= 1; i--)
    {
        std::string row(((width - (i * 2)) / 2), '-');
        for (int j = i; j >= 1; j--)
        {
            row += static_cast<char>(96 + j);
        }
        std::cout << row << std::endl;
    }
    for (int i = 2; i <= n; i++)
    {
        std::string row(((width - (i * 2)) / 2), '-');
        for (int j = i; j >= 1; j--)
        {
            row += static_cast<char>(96 + j);
        }
        std::cout << row << std::endl;
    }
}

int main()
{
    int numPhotos;
    std::cout << "Enter the number of freedom fighters' photos: ";
    std::cin >> numPhotos;

    printPattern(numPhotos);

    return 0;
}
