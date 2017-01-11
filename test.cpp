#include "gtest/gtest.h"
#include "Solution.h"

namespace {

  class SolutionTest : public ::testing::Test {
    protected:
      virtual void SetUp () {
        num1 = 1;
        num2 = 2;
      }

      int num1;
      int num2;
  };

  TEST_F(SolutionTest, Add) {
    Solution sol;
    EXPECT_EQ(3, sol.add(num1, num2));
  }

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
