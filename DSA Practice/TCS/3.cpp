#include <iostream>
#include <string>

bool isVowel(char ch) {
    ch = toupper(ch);
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

void wordGameWinner(std::string s) {
    int abhiScore = 0;
    int ramuScore = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isVowel(s[i])) {
            ramuScore += s.length() - i;
        } else {
            abhiScore += s.length() - i;
        }
    }

    if (abhiScore > ramuScore) {
        std::cout << "Abhi " << abhiScore << std::endl;
    } else if (abhiScore < ramuScore) {
        std::cout << "Ramu " << ramuScore << std::endl;
    } else {
        std::cout << "Draw" << std::endl;
    }
}

int main() {
    std::string s;
    std::cout << "Enter the string: ";
    std::cin >> s;

    wordGameWinner(s);

    return 0;
}
