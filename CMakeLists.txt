cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(mmap_test)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(mmap_test main.cxx)
target_link_libraries(mmap_test)
install(TARGETS mmap_test DESTINATION bin)

add_executable(test_read test_read.cxx)
target_link_libraries(test_read)
install(TARGETS test_read DESTINATION bin)