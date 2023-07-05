#include <iostream>
#include <string>

std::string findLongestRepeatingSubstring(const std::string &str)
{
    int maxLen = 0;
    std::string longestSubstring;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            int len = 0;

            while (j + len < str.length() && str[i + len] == str[j + len])
            {
                len++;
            }

            if (len > maxLen)
            {
                maxLen = len;
                longestSubstring = str.substr(i, len);
            }
        }
    }

    return longestSubstring;
}

int main()
{
    std::string str;
    std::cout << "Enter the string: ";
    std::cin >> str;

    std::string longestSubstring = findLongestRepeatingSubstring(str);

    if (!longestSubstring.empty())
    {
        std::cout << longestSubstring << std::endl;
    }
    else
    {
        std::cout << "No repeating substring found." << std::endl;
    }

    return 0;
}