#include "mmap_span.h"
#include <exception>
#include <iostream>
#include <limits>
#include <random>
#include <string>

int main(int argc, const char *argv[]) {
  try {
    mmap_tools<int> m(
        "test.bin", true,
        1073741824); // 4GB file, can be bigger than physical memory
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(std::numeric_limits<int>::min(),
                                        std::numeric_limits<int>::max());
    for (auto &&i : m) {
      i = dis(gen);
    }
  } catch (std::exception & e) {
    std::cout << e.what() << std::endl;
  }
}