#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2_PPVIS_Sem1/Transport.h"
#include "../Lab_2_PPVIS_Sem1/Transport.cpp"
#include "../Lab_2_PPVIS_Sem1/Person.h"
#include "../Lab_2_PPVIS_Sem1/Person.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		Person person;
		
		TEST_METHOD(MetroTests)
		{
			Metro metro;
			Assert::IsTrue(person.ChooseTransport(&metro) == "Metro");
		}

		TEST_METHOD(PlaneTests)
		{
			Plane plane;
			Assert::IsTrue(person.ChooseTransport(&plane) == "Plane");
		}

		TEST_METHOD(HelicopterTests)
		{
			Helicopter helicopter;
			Assert::IsTrue(person.ChooseTransport(&helicopter) == "Helicopter");
		}

		TEST_METHOD(LinerTests)
		{
			Liner liner;
			Assert::IsTrue(person.ChooseTransport(&liner) == "Liner");
		}

		TEST_METHOD(YahtTests)
		{
			Yacht yaht;
			Assert::IsTrue(person.ChooseTransport(&yaht) == "Yaht");
		}

		TEST_METHOD(TrainTests)
		{
			Train train;
			Assert::IsTrue(person.ChooseTransport(&train) == "Train");
		}

		TEST_METHOD(BicyleTests)
		{
			Bicycle bicyle;
			Assert::IsTrue(person.ChooseTransport(&bicyle) == "Bicyle");
		}

		TEST_METHOD(carTests)
		{
			car car;
			Assert::IsTrue(person.ChooseTransport(&car) == "car");
		}

		TEST_METHOD(BusTests)
		{
			Bus bus;
			Assert::IsTrue(person.ChooseTransport(&bus) == "Bus");
		}

		TEST_METHOD(FlyingcarTests)
		{
			Flyingcar flyingcar;
			Assert::IsTrue(person.ChooseTransport(&flyingcar) == "Flyingcar");
		}
	};
}
