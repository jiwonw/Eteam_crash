#include "pch.h"
#include "../default/cal.cpp"



class ParamTestFixture : public testing::TestWithParam<int>
{
public:
};

INSTANTIATE_TEST_CASE_P
(
	TestGetSumWithParamList,
	ParamTestFixture,
	testing::Values(1, 5, 100, 777)
);

TEST_P(ParamTestFixture, TestGetSumWithParam) 
{
	srand(GetParam());
	const int NR_TC = 5;
	Cal cal;

	for (int i = 0; i < NR_TC; i++)
	{
		int a = rand() % 10;
		int b = rand() % 10;
		EXPECT_EQ(a+b, cal.getSum(a, b));
	}
}


TEST(TestCaseName, Zegop) {
	Cal cal;	
	EXPECT_EQ(9, cal.Zegop(3));
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
