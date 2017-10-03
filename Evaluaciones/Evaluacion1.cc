//Víctor Rendón S. | A01022462
#include "gtest/gtest.h"
#include <iostream>
#include <fstream>
using namespace std;

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::UnitTest;
using ::testing::TestEventListeners;
using ::testing::TestPartResult;

class Scanner
{
	int n;

	bool port(int n)
	{
		
	}
};

class EventListener : public EmptyTestEventListener
{
public:
	ofstream outputfile;

	virtual void OnTestProgramStart(const UnitTest& ut)
	{ 
		printf("Bienvenido a este Test Event.\n");
		outputfile.open("Resultados.txt");
		outputfile << "Iniciando Test\n";
		outputfile << "-----------------------\n";
	}

	virtual void OnTestProgramEnd (const UnitTest& ut)
	{
		outputfile << "Tests correctos: ";
		outputfile << ut.successful_test_count() << endl;
		outputfile << "Tests fallidos: ";
		outputfile << ut.failed_test_count() << endl;
		outputfile << "\nEl tiempo de ejecuccion de fue: ";
		outputfile << ut.elapsed_time() << " ms" << endl;
		outputfile.close();
	}
	virtual void OnTestPartResult(const TestPartResult& tpr)
	{
		if (tpr.failed())
		{
			outputfile << "\n-----------------------\n";
			outputfile << "\nFALLA\n";
			outputfile << "Detalles:\n";
			outputfile << tpr.summary()<<endl;
			outputfile << "\nLinea de error: ";
			outputfile << tpr.line_number() <<endl;
		}
		else
		{
			outputfile << "\n-----------------------\n";
			outputfile << "\nNo hubo fallas. " << endl;
		}
	}
	virtual void OnTestCaseStart(const testing::TestCase& tc)
	{
		outputfile << "Test Case: ";
		outputfile << tc.name();
	}
	virtual void OnTestStart(const testing::TestInfo& ti)
	{
		outputfile << "\nTest Name: ";
		outputfile << ti.name();
	}
	virtual void OnTestCaseEnd(const testing::TestCase& tc)
	{
	}
};
 
TEST(TcnUno, tname)
{
	ASSERT_EQ(1,-1);
}

int main(int argc, char**argv)
{
	InitGoogleTest(&argc, argv);
	TestEventListeners& listeners = UnitTest::GetInstance()->listeners();
	listeners.Append(new EventListener);
	return RUN_ALL_TESTS();
}
