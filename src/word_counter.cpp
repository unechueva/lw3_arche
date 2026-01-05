#include "word_counter.h"
#include <cctype>

int countWords(const std::string& line) {
    if (line.empty()) {
        return 0;
    }

    int wordCount = 0;
    bool inWord = false;

    for (char c : line) {
        if (std::isspace(static_cast<unsigned char>(c))) {
            if (inWord) {
                wordCount++;
                inWord = false;
            }
        } else {
            inWord = true;
        }
    }

    if (inWord) {
        wordCount++;
    }

    return wordCount;
}
