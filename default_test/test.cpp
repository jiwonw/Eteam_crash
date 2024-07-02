#include "pch.h"
#include "../default/cal.cpp"

TEST(TestCaseName, MinusTest) {
	Cal cal;
	EXPECT_EQ(cal.getMinus(3, 1), 2);
}