#include <iostream>
#include "caesarCipher.h"

using namespace Caesar;

int main() {
    try {
        //std::string text = Caesar::inputText();
        std::string text = inputText();

        int shift = 0;
        std::cout << "Введіть значення зсуву (ціле число): ";
        std::cin >> shift;

       // std::string encrypted = Caesar::caesarEncrypt(text, shift);
        std::string encrypted = caesarEncrypt(text, shift);
       // Caesar::outputText(encrypted);
        outputText(encrypted);
    }
    catch (std::exception& e) {
        std::cerr << "Помилка: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}