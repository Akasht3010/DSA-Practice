#include <iostream>
#include <cstdio>
#include <string>

int main()
{
    std::string name;
    std::cout << "Enter the name: ";
    std::getline(std::cin, name);

    std::string dob;
    std::cout << "Enter the date of birth (DD:MM:YYYY): ";
    std::getline(std::cin, dob);

    std::string gender;
    std::cout << "Enter the gender: ";
    std::getline(std::cin, gender);

    char firstChar = name[0];

    int day, month, year;
    sscanf(dob.c_str(), "%d:%d:%d", &day, &month, &year);

    if (gender == "Female")
    {
        month += 50;
    }

    char employeeID[6];
    sprintf(employeeID, "%c%02d%02d", firstChar, day, month);

    std::cout << "Employee ID: " << employeeID << std::endl;

    return 0;
}