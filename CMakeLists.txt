cmake_minimum_required(VERSION 3.10)

project(random)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    source/random.cpp
    source/someClass.cpp
    source/anotherRandom.cpp)

set(TESTS
    tests/random.ut.cpp
    tests/someClass.ut.cpp
    tests/anotherRandom.ut.cpp)

set(FLAGS -Wall -Wextra -pedantic -Wconversion -Werror -O3 -std=c++17)

include_directories(headers)

add_library(${PROJECT_NAME}-lib STATIC ${SOURCES})

add_executable(${PROJECT_NAME} source/main.cpp)
add_executable(${PROJECT_NAME}-ut tests/catchMain.cpp ${TESTS})

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)
target_link_libraries(${PROJECT_NAME}-ut ${PROJECT_NAME}-lib)

target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
target_compile_options(${PROJECT_NAME}-ut PRIVATE ${FLAGS})

enable_testing()
add_test(NAME ${PROJECT_NAME}-allTests COMMAND ${PROJECT_NAME}-ut)

