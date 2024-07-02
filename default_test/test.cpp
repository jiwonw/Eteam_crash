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

TEST(TestCaseName, getGop) {
	auto cal = Cal{};

	EXPECT_EQ(1, cal.getGop(1, 1));
	EXPECT_EQ(2, cal.getGop(1, 2));
	EXPECT_EQ(4, cal.getGop(2, 2));
	EXPECT_EQ(10000, cal.getGop(100, 100));
	EXPECT_EQ(7006652, cal.getGop(1234, 5678));
	EXPECT_NE(97408265472, cal.getGop(123456, 789012));
}