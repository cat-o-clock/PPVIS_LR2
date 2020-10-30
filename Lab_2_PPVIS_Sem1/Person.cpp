//**@page Файл для реализации функций класса Человек
#include "person.h"
#include "Transport.h"
using namespace std;

string Person::ChooseTransport(Transport *transport)
{	
	return transport->MakeSignal();
}
