// Copyright 2023 Tameron Honnellio
#ifndef WORDFREQUENCY_HPP_
#define WORDFREQUENCY_HPP_
#include <iostream>
#include <unordered_map>
#include <string>

class WordFrequency {
 public:
 // constructor, takes a text string as an input
 WordFrequency(std::string text);

 // insert new text into structure
 void insertText(std::string text);

 // getter to access frequency given word
 // throw exception if word is not in structure
 size_t freq(std::string word) const;

 private:
 // unordered map containing words and their frequencies
 unordered_map<std::string, size_t> wordFrequency;
};

// overload the stream insertion operator to output a report
std::ostream& operator<<(std::ostream& out, const WordFrequency& report);

#endif  // WORDFREQUENCY_HPP_
