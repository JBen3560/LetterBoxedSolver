#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
    std::ifstream file("wordlist.txt");
    std::vector<std::string> words;
    std::string word;

    if (!file) {
        std::cerr << "Error opening wordlist.txt" << std::endl;
        return 1;
    }

    while (file >> word) {
        words.push_back(word);
    }

    file.close();

    // Print loaded words (optional)
    std::cout << "Loaded " << words.size() << " words." << std::endl;
    for (const auto& w : words) {
        std::cout << w << std::endl;
    }

    return 0;
}
