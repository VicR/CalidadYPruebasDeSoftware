#include <iostream>
#include "gtest/gtest.h"
using namespace std;

template <class T>
class Fixture : public ::testing::Test
{
public:
	void setUp()
	{
		sort = new T;
	}
	void tearDown()
	{
		delete sort;
	}
	Sort* sort;
};

typedef ::testing::Types< BubbleSort, InsertionSort, QuickSort> implementations;
TYPED_TEST_CASE(Fixture, implementations);

TYPED_TEST(Fixture, implementations)
{
	this->parent->doSomething();
}