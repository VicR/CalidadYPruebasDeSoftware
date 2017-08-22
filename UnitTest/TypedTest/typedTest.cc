#include "gtest/gtest.h"
# include "jerarquia.h"

template <class T>
class Fixture : public ::testing::Test
{
public:
	void setUp()
	{
		parent = new T;
	}
	void tearDown()
	{
		delete parent;
	}
	Parent* parent;
};

typedef ::testing::Types< Child1, Child2, Child3 > implementations;
TYPED_TEST_CASE(Fixture, implementations);

TYPED_TEST(Fixture, implementations)
{
	this->parent->doSomething();
}