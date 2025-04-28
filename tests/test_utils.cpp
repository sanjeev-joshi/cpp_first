#include <gtest/gtest.h>
#include "../src/utils/utils.hpp"

TEST(UtilsTests, Add) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(UtilsTests, Subtract) {
    EXPECT_EQ(subtract(5, 2), 3);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}