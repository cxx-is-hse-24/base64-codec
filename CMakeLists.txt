cmake_minimum_required(VERSION 3.20)

project(base64-codec)

add_subdirectory(doctest)

add_executable(encode-tests encode-tests.cpp)
target_link_libraries(encode-tests doctest)

add_executable(decode-tests decode-tests.cpp)
target_link_libraries(decode-tests doctest)

enable_testing()
add_test(NAME encode-tests COMMAND encode-tests --force-colors -d)
add_test(NAME decode-tests COMMAND decode-tests --force-colors -d)