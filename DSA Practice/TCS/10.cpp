#include <iostream>
#include <climits>

int main()
{
    int N;
    std::cout << "Enter the number of houses: ";
    std::cin >> N;

    int maxDistance = INT_MIN;
    int startHouse = 0;

    for (int i = 0; i < N; i++)
    {
        int houseNumber, position;
        std::cout << "Enter the house number and position for house " << (i + 1) << ": ";
        std::cin >> houseNumber >> position;

        if (i < N - 1)
        {
            int nextHousePosition;
            std::cin >> nextHousePosition;
            int distance = nextHousePosition - position;

            if (distance > maxDistance)
            {
                maxDistance = distance;
                startHouse = houseNumber;
            }
        }
    }

    std::cout << "House numbers between which the largest house can be built: "
              << startHouse << " " << (startHouse + 1) << std::endl;

    return 0;
}
