#include <gtest/gtest.h>

TEST(ClientTests, test) {
    int i = 0;
    EXPECT_EQ(0, i) << "I is not the expected value.";
}
