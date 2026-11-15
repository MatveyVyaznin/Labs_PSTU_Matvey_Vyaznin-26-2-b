#include <iostream>
#include <cstring>
#include <windows.h>

// Функция проверяет, является ли символ c гласной буквой (1 - да, 0 - нет)
int isVowel(char c) {
    char vowels[] = "aeiouyAEIOUYаеёиоуыэюяАЕЁИОУЫЭЮЯ";
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (c == vowels[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char s[256];
    std::cout << "Введите строку (в конце поставьте точку):" << std::endl;
    std::cin.getline(s, 256);

    char word[256];
    int k = 0;
    int hasVowel = 0;

    std::cout << "Слова без гласных:" << std::endl;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && s[i] != '.') {
            word[k] = s[i];
            k++;
            if (isVowel(s[i]) == 1) {
                hasVowel = 1;
            }
        }
        else {
            if (k > 0 && hasVowel == 0) {
                word[k] = '\0';
                std::cout << word << std::endl;
            }
            k = 0;
            hasVowel = 0;
        }

        if (s[i] == '.') {
            break;
        }
    }

    return 0;
}
