#include "pch.h"
#include "../default/cal.cpp"

TEST(TestCaseName, TestName) {
	Cal cal;	
	EXPECT_EQ(9, cal.Zegop(3));
}

