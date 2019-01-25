

#include <iostream>
#include <Windows.h>
#include "Nappula.h"
#include "Asema.h"
#include "Kayttoliittyma.h"

using namespace std;




int main()
{

	Asema* asema = new Asema();
	Kayttoliittyma* kayttoliittyma = new Kayttoliittyma(asema);

	kayttoliittyma->piirraLauta();

	//wcout << L"\u2656\n";


	return 0;
}



