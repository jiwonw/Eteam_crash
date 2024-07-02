#include "pch.h"
#include "../default/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, getSumSum) {
	Cal c;
	int retult = c.getSumSum(1, 2, 3);
	EXPECT_EQ(retult, 6);
}