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

TEST(TestName, test)
{
	Cal cal;
	EXPECT_EQ(1+2, cal.getSum(1,2));
}