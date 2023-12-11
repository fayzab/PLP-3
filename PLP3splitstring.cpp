//A function that takes in a string and splits it into two strings, then returns both strings
#include <iostream>
#include <string>

std::pair<std::string, std::string> splitString(const std::string& inputString) {
    size_t midpoint = inputString.length() / 2;

    std::string part1 = inputString.substr(0, midpoint);
    std::string part2 = inputString.substr(midpoint);
    return std::make_pair(part1, part2);
}

int main() {
    std::string input = "FayzaBeshir";
    auto result = splitString(input);

    // Print the results
    std::cout << "Part 1: " << result.first << std::endl;
    std::cout << "Part 2: " << result.second << std::endl;

    return 0;
}


