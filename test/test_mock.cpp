#include <memory>
#include "gmock/gmock.h"
#include "gtest/gtest.h"

class Mock {
 public:
  MOCK_METHOD2(square, bool(int, int &));
};

TEST(Mock, Square) {
  auto mock = std::make_shared<Mock>();
  EXPECT_CALL(*mock, square(testing::_, testing::_))
      .Times(2)
      .WillOnce(testing::Return(true))
      .WillOnce(testing::DoAll(testing::SetArgReferee<1>(9), testing::Return(true)));

  int value;
  EXPECT_TRUE(mock->square(0, value));

  EXPECT_TRUE(mock->square(3, value));
  EXPECT_EQ(value, 9);
}
