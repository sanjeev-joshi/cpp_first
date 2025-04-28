cmake_minimum_required(VERSION 3.10)
project(MyMathProject)

enable_testing()
find_package(GTest REQUIRED)

# === Coverage flags (only for GNU/Clang) ===
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    set(COVERAGE_COMPILE_FLAGS --coverage -O0 -g)
    set(COVERAGE_LINK_FLAGS --coverage)
endif()

# === Source files ===
add_library(utils src/utils/utils.cpp)
target_include_directories(utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Apply coverage flags to utils
target_compile_options(utils PRIVATE ${COVERAGE_COMPILE_FLAGS})
target_link_options(utils PRIVATE ${COVERAGE_LINK_FLAGS})

# === Test executable ===
add_executable(run_tests tests/test_utils.cpp)
target_include_directories(run_tests PRIVATE ${GTEST_INCLUDE_DIRS})
target_link_libraries(run_tests utils ${GTEST_LIBRARIES} pthread)

# Apply coverage flags to test executable
target_compile_options(run_tests PRIVATE ${COVERAGE_COMPILE_FLAGS})
target_link_options(run_tests PRIVATE ${COVERAGE_LINK_FLAGS})

# === Add tests ===
add_test(NAME UtilsTests COMMAND run_tests)
