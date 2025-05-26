#pragma once
#include <string>

namespace Caesar {

    std::string inputText();
    std::string caesarEncrypt( std::string& text, int shift);
    void outputText( std::string& encryptedText);

}