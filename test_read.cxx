#include "mmap_span.h"
#include <exception>
#include <iostream>
#include <limits>
#include <random>
#include <string>

int main(int argc, const char *argv[]) {
  try {
    mmapio<int> m("test.bin", false);
    std::cout << m[128] << std::endl;
  } catch (std::runtime_error &e) {
    std::cout << e.what() << std::endl;
  }
}