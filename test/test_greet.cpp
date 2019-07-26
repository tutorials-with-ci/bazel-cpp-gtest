#include "greet.h"
#include "gtest/gtest.h"

TEST(Greet, Hello) {
  EXPECT_EQ(Greet::hello("World"), 0);
}
