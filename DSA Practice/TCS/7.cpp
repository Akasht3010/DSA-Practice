#include <iostream>

int calculateScrappedVolume(int N)
{
    int V = N * N * N;
    int V_scrapped = (N - 2) * (N - 2) * (N - 2);
    int scrappedVolume = V - V_scrapped;
    return scrappedVolume;
}

int main()
{
    int T;
    std::cout << "Enter the number of test cases: ";
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        std::cout << "Enter the side length of the cube for test case " << (i + 1) << ": ";
        std::cin >> N;
        int scrappedVolume = calculateScrappedVolume(N);
        std::cout << "Scrapped volume for test case " << (i + 1) << ": " << scrappedVolume << std::endl;
    }

    return 0;
}
