#include <array>
#include <functional>
#include "day01.hpp"
#include "day02.hpp"


std::array<std::function<void(void)>, 2> DAYS = {
    day01::solve,
    day02::solve,
};