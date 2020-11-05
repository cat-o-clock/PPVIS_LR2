#include <iostream>
#include "transport.h"
#include "person.h"
#include "UserInterface.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "ru");
	UserInterface user = UserInterface();
	user.Menu();

	return 0;
}