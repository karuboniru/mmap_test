#include "mmap_span.h"
#include <exception>
#include <iostream>
#include <limits>
#include <random>
#include <string>

int main(int argc, const char *argv[]) {
  try {
    mmap_tools<int> m("test.bin", false, 1073741824 * sizeof(int));
    // for (auto &&i : m) {
    std::cout << m[128] << std::endl;
    // }
  } catch (std::exception e) {
    std::cout << e.what() << std::endl;
  }
}