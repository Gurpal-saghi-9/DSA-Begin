#include <iostream>
#include <string>

void reverseSentence(std::string& sentence, int start) {
    if (start >= sentence.length()) {
        return;
    }
    char currentChar = sentence[start];
    reverseSentence(sentence, start + 1);
    std::cout << currentChar;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "Reversed sentence: ";
    reverseSentence(sentence, 0);
    std::cout << std::endl;

    return 0;
}