#include "Kayttoliittyma.h"
#include "Siirto.h"
#include <string>
using namespace std;

Kayttoliittyma::Kayttoliittyma(Asema * asema)
{
	_asema = asema;
}

void Kayttoliittyma::piirraLauta()
{

	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED |
		//BACKGROUND_GREEN | BACKGROUND_BLUE);

	_setmode(_fileno(stdout), _O_U16TEXT);

	for (int y = 0; y < 8; y++) {

		if (y % 2 == 0) {

			for (int x = 0; x < 8; x++) {
				//wcout << _asema->lauta[x][y];
				if (x % 2 == 0) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_BLUE);
					wcout << " ";
				}

				else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_GREEN);
					wcout << " ";
				}

				if (_asema->lauta[x][y] == nullptr) {
					wcout << L"  ";
				}
				else
				{
					wcout << _asema->lauta[x][y]->getUnicode();
					wcout << L" ";
					//wcout << "X";
				}
			}
		}

		else
		{
			for (int x = 0; x < 8; x++) {
				//wcout << _asema->lauta[x][y]->getUnicode();
				if (x % 2 == 0) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_GREEN);
					std::wcout << " ";
				}

				else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_BLUE);
					wcout << " ";
				}

				if (_asema->lauta[x][y] == nullptr) {
					wcout << L"  ";
				}
				else
				{
					wcout << _asema->lauta[x][y]->getUnicode();
					wcout << L" ";
					//wcout << "X";   
				}
			}
		}

		wcout << endl;
	}

	/*for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			if (_asema->lauta[x][y] == nullptr) {
				wcout << L" ";
			}
			else
			{
				wcout << _asema->lauta[x][y]->getUnicode();
			}
		}
	}*/

};

/*void vastustajanSiirto() 
{
	wstring x;
	int y;
	int z;
	wcout << "anna nappula T/R/L/D/K \n";
	wcin >> x;
	wcout << "anna alkuruutu esim g1 \n";
	wcin >> y;
	wcout << "anna loppuruutu esim f3 \n";
	wcin >> z;
	//Siirto(y , z);
}*/





