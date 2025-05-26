#include <iostream>
#include "caesarCipher.h"

namespace Caesar {
// Функція для введення тексту користувачем
    std::string inputText() {
        std::string text;
        std::cout << "Введіть рядок для шифрування: ";
        std::getline(std::cin, text);
        if (text.empty()) {
            throw std::invalid_argument("Рядок не може бути порожнім.");
        }
        return text;
    }
// Функція для шифрування тексту методом Цезаря
    std::string caesarEncrypt( std::string& text, int shift) {
        if (shift < 0) {
            throw std::invalid_argument("Зсув має бути невід'ємним.");
        }

        std::string result = text;
        for (char& c : result) {
            if (std::isalpha(c)) {
                char base = std::isupper(c) ? 'A' : 'a';
                c = (c - base + shift) % 26 + base;
            }
        }
        return result;
    }
// Функція для виведення зашифрованого тексту
    void outputText( std::string& encryptedText) {
        std::cout << "Зашифрований текст: " << encryptedText << std::endl;
    }

}