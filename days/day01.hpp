#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace day01 {

void solve() {
    std::ifstream infile("data/day01.txt");
    std::vector<int32_t> numbers;
    int32_t total = 0;
    for (std::string line; std::getline(infile, line);) {
        if (line.empty()) {
            numbers.push_back(total);
            total = 0;
        } else {
            total += std::stoi(line);
        }
    }
    numbers.push_back(total);
    // sort numbers
    std::sort(numbers.begin(), numbers.end());
    // find best and sum of top 3

    std::cout << "Part 1: Best: " << numbers.back() << "\n";
    std::cout << "Part 2: Sum of top 3: "
              << numbers[numbers.size() - 1] + numbers[numbers.size() - 2] +
                     numbers[numbers.size() - 3]
              << "\n";
}
} // namespace day01