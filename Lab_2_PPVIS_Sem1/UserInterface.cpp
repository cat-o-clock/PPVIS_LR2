//**@page Файл для реализации функций Пользовательского Интерфейса
#include "Userinterface.h"
using namespace std;
#include <iostream>
#include <string>

void Lists::PrinterMainMenuList()
{
	cout << "\n\n\n\t\t\t\t\t\tCommands\n\n";
	cout << "\t\t\t\t(1) Start\n\n";
	cout << "\t\t\t\t(0) Finish\n\n";
	cout << "\t\tCommand: ";
}

void Lists::PrinterMenuList()
{
	cout << "\n\n\n\t\t\t\t\t\tPlease, Choose the type of transport\n\n";
	cout << "\t\t\t\t(1) Metro\n\n";
	cout << "\t\t\t\t(2) Plane\n\n";
	cout << "\t\t\t\t(3) Helicopter\n\n";
	cout << "\t\t\t\t(4) Liner\n\n";
	cout << "\t\t\t\t(5) Yaсht\n\n";
	cout << "\t\t\t\t(6) Bicycle\n\n";
	cout << "\t\t\t\t(7) Bus\n\n";
	cout << "\t\t\t\t(8) Car\n\n";
	cout << "\t\t\t\t(9) Train\n\n";
	cout << "\t\t\t\t(0) FlyingCar\n\n";
	cout << "\t\tCommand: ";
}

UserInterface::UserInterface()
{
	menu = Lists();
	commander = TransportChooser();
}

void UserInterface::confirm()
{
	std::cout << "\n\n\nEnter any key to continue...";

	char key;
	cin >> key;
}


void UserInterface::Menu()
{
	char userChoice;

	do
	{
		system("cls");
		menu.PrinterMainMenuList();
		cin >> userChoice;

		if (userChoice != '1')
			break;

		system("cls");

		switch (userChoice)
		{
		case '1':
		{
			menu.PrinterMenuList();
			char Choice;
			cin >> Choice;
			commander.SetTransportChooser(Choice);
			commander.Signal();
			break;
		}
		case '0':
			break;
		}
		confirm();

	} while (true);

}

TransportChooser::TransportChooser(){}

void TransportChooser::SetTransportChooser(char c)
{
	choose = c;
}

void TransportChooser::Signal()
{
	Person person;
	switch (choose)
	{
	case '1':
	{	
		Metro metro;
		cout << person.ChooseTransport(&metro);
		break;
	}
	case '2':
	{
		Plane plane;
		cout << person.ChooseTransport(&plane);
		break;
	}
	case '3':
	{
		Helicopter helicopter;
		cout << person.ChooseTransport(&helicopter);
		break;
	}
	case '4':
	{
		Liner liner;
		cout << person.ChooseTransport(&liner);
		break;
	}
	case '5':
	{
		Yacht yaсht;
		cout << person.ChooseTransport(&yaсht);
		break;
	}
	case '6':
	{
		Bicycle bicycle;
		cout << person.ChooseTransport(&bicycle);
		break;
	}
	case '7':
	{
		Bus bus;
		cout << person.ChooseTransport(&bus);
		break;
	}
	case '8':
	{
		car Car;
		cout << person.ChooseTransport(&Car);
		break;
	}
	case '9':
	{
		Train train;
		cout << person.ChooseTransport(&train);
		break;
	}
	case '0':
	{
		Flyingcar flyingcar;
		cout << person.ChooseTransport(&flyingcar);
		break;
	}
	}
}
