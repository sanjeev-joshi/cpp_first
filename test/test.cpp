#include <gtest/gtest.h>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}