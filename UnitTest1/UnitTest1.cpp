#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3(A)/Vector.cpp"
#include "../3.3(A)/Vector.h"
#include "../3.3(A)/Vector2D.h"
#include "../3.3(A)/Vector2D.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector A(3, 4);
			Assert::AreEqual(A.Modul(), 5.0);
		}
	};
}
