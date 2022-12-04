#include <gtest/gtest.h>
#include <DBHelper.hpp>

/*TEST(ServerTest, TestEnabled) {
  Server server;
  EXPECT_EQ(server.IsEnabled(), true);
}*/

/*TEST(testbundle, EmptyString){
  ASSERT_EQ("", myfunc(""));
}*/

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}