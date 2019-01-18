#include <iostream>
#include <string>
#include "Nappula.h"
#include "Asema.h"
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


Asema::Asema()
{


}



int main()
{
	Nappula VK;
	Nappula VD;
	Nappula VT;
	Nappula VL;
	Nappula VR;
	Nappula VS;
	Nappula MK;
	Nappula MD;
	Nappula MT;
	Nappula ML;
	Nappula MR;
	Nappula MS;
/*
VK, L"\u2654
VD, L"\u2655
VT, L"\u2656
VL, L"\u2657
VR, L"\u2658
VS, L"\u2659"
MK, L"\u265A
MD, L"\u265B
MT, L"\u265C”
ML, L"\u265D"
MR, L"\u265E"
MS, L"\u265F"
*/

	//valkoiset nappulat
	VK.setKoodi(0);
	VK.setVari(0);
	VK.setUnicode(L"\u2654");
	VD.setKoodi(1);
	VD.setVari(0);
	VD.setUnicode(L"\u2655");
	VT.setKoodi(2);
	VT.setVari(0);
	VT.setUnicode(L"\u2656");
	VL.setKoodi(3);
	VL.setVari(0);
	VL.setUnicode(L"\u2657");
	VR.setKoodi(4);
	VR.setVari(0);
	VR.setUnicode(L"\u2658");
	VS.setKoodi(5);
	VS.setVari(0);
	VS.setUnicode(L"\u2659");

	//mustat nappulat
	MK.setKoodi(6);
	MK.setVari(1);
	MK.setUnicode(L"\u265A");
	MD.setKoodi(7);
	MD.setVari(1);
	MD.setUnicode(L"\u265B");
	MT.setKoodi(8);
	MT.setVari(1);
	MT.setUnicode(L"\u265C");
	ML.setKoodi(9);
	ML.setVari(1);
	ML.setUnicode(L"\u265D");
	MR.setKoodi(10);
	MR.setVari(1);
	MR.setUnicode(L"\u265E");
	MS.setKoodi(11);
	MS.setVari(1);
	MS.setUnicode(L"\u265F");
		

}
