#include <iostream>
#include <string>
#include "Nappula.h"
using namespace std;
Nappula::Nappula()
{
	unicode;
	vari;
	_koodi;
}
void Nappula::setKoodi(int koodi) 
{
	_koodi = koodi;

}
int Nappula::getKoodi() 
{
	return _koodi;
}
void Nappula::setUnicode(wstring _unicode)
{
	unicode = _unicode;
}
void Nappula::setVari(int Vari)
{
	vari = Vari;
}
int Nappula::getVari() 
{
	return vari;
}

