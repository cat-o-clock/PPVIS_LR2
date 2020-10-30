//**@page Заголовочный файл для класса Человек
#pragma once
using namespace std;
#include <iostream>
#include "Transport.h"

class Person {
public:
	string ChooseTransport(Transport*);
};