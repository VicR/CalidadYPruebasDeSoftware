#include "gtest/gtest.h"

double division(int a, int b) 
{
	if (b == 0) {
		throw std::domain_error("Error");
	}
	return (a / b);
}

TEST(TestCaseName, TestNameUno)
{
	EXPECT_FALSE(false);
	ASSERT_TRUE(true);
	SUCCEED();
	FAIL();
	ADD_FAILURE();
}
TEST(TestCaseName, TestNameDos)
{
	ASSERT_EQ(4, 4);
	ASSERT_NE(2, 3);
	ASSERT_LT(4, 9);
	ASSERT_LE(5, 5);
	ASSERT_GT(3, 1);

}
TEST(TestCaseName, TestNameTres)
{
	ASSERT_GE(3, 2);
	ASSERT_STREQ("Bye", "Bye");
	ASSERT_STRNE("Hi", "Bye");
	ASSERT_STRCASEEQ("HI", "hi");
	ASSERT_STRCASENE("Hi", "Hai");
}
TEST(TestCaseName, TestNameCuatro)
{
	ASSERT_THROW(division(3, 0), std::domain_error);
	ASSERT_ANY_THROW(division(3, 0));
	ASSERT_NO_THROW(division(3, 1));
	ASSERT_FLOAT_EQ(2.2, 2.2);
	ASSERT_DOUBLE_EQ(12, 12);
	ASSERT_NEAR(4, 1, 4);
}