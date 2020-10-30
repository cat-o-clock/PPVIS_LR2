//**@page Заголовочный файл для Пользовательского Интерфейса
#pragma once
#include "Transport.h"
#include "Person.h"
#include <iostream>
using namespace std;

class TransportChooser
{
	char choose; 
public:
	TransportChooser();
	void SetTransportChooser(char c);

	void Signal();
};


class Lists
{
public:
	void PrinterMainMenuList();
	void PrinterMenuList();
};

class UserInterface
{
private:
	TransportChooser commander;
	Lists menu;

public:
	UserInterface();

	void confirm();
	void Menu();
};