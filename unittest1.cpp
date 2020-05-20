#include "stdafx.h"
#include "CppUnitTest.h"
#include <fstream>
#include<string>
#include"../Lab 3/matrix_of_adjacencies.h"
#include"../Lab 3/Used_function.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTestForAlgorithmFloydUorshell
{
	TEST_CLASS(UnitTestForAlgorithmFloydUorshell)
	{
	public:

		TEST_METHOD(TestExamplePath_is_avaible)
		{
			ifstream vvod("C:\\Users\\NikRER\\Desktop\\”чебный материал\\ји—ƒ(Ћабы)\\Ћаб 3\\Lab 3\\UnitTest1\\input1.txt");
			List<string>* list_fly = new List<string>();
			string city_Start = "Vladivostok";
			string city_End = "Moscow";
			InputDataFromFile(list_fly, vvod);
			Matrix* matrix_floid_uorshell = new Matrix(list_fly);
			string cur = "The best route for the price: 30.000000\nRoute: Vladivostok -> Saint Petersburg -> Moscow ";
			Assert::AreEqual(matrix_floid_uorshell->Floid_Uorshell(city_Start, city_End), cur);
		}
		TEST_METHOD(TestExamplePath_is_not_avaible)
		{
			ifstream vvod("C:\\Users\\NikRER\\Desktop\\”чебный материал\\ји—ƒ(Ћабы)\\Ћаб 3\\Lab 3\\UnitTest1\\input2.txt");
			List<string>* list_fly = new List<string>();
			string city_Start = "Tambov";
			string city_End = "Saint Petersburg";
			InputDataFromFile(list_fly, vvod);
			Matrix* matrix_floid_uorshell = new Matrix(list_fly);
			string cur = "This route can't be built, try waiting for the flight schedule for tomorrow!";
			Assert::AreEqual(matrix_floid_uorshell->Floid_Uorshell(city_Start, city_End), cur);
		}
	};
}
