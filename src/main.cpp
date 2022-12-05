#include <iostream>
#include <string>
#include "days.hpp"

int main() {

    for (size_t day = 0; day < DAYS.size(); ++day) {
        std::cout << "Day " << day + 1 << "\n";
        DAYS[day]();
        std::cout << "----------------\n";
    }

}