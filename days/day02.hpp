#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace day02 {
void solve() {
    //             R  P  S  R ...
    std::array<uint32_t, 9> lut{4, 1, 7, 8, 5, 2, 3, 9, 6};
    std::ifstream infile("data/day02.txt");
    uint32_t score = 0;
    for (std::string line; std::getline(infile, line);) {
        auto a = static_cast<uint32_t>(line[0] - 'A');
        auto b = static_cast<uint32_t>(line[2] - 'X');

        score += lut[a * 3 + b];
    }

    std::cout << "Part 1: Result: " << score << "\n";
}
}  // namespace day02