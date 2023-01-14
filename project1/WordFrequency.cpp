// Copyright 2023 Tameron Honnellio
#include "WordFrequency.hpp"
#include <stdexcept>

 // constructor, takes a text string as an input
WordFrequency::WordFrequency(std::string text) {
    for (size_t i = 0; i < text.size(), i++) {
        
    }
}

// insert new text into structure
void WordFrequency::insertText(std::string text) {}

// getter to access frequency given word
// throw exception if word is not in structure
size_t WordFrequency::freq(std::string word) const {
    return 0;
}

// overload the stream insertion operator to output a report
std::ostream& operator<<(std::ostream& out, const WordFre quency& report) {
    return std::cout;
}