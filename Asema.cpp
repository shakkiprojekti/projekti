#include "Asema.h"
using namespace std;


Nappula* Asema::vk = new Nappula(L"\u2654", 0, VK);
Nappula* Asema::vd = new Nappula(L"\u2655", 0, VD);
Nappula* Asema::vt = new Nappula(L"\u2656", 0, VT);
Nappula* Asema::vl = new Nappula(L"\u2657", 0, VL);
Nappula* Asema::vr = new Nappula(L"\u2658", 0, VR);
Nappula* Asema::vs = new Nappula(L"\u2659", 0, VS);

Nappula* Asema::mk = new Nappula(L"\u265A", 1, MK);
Nappula* Asema::md = new Nappula(L"\u265B", 1, MD);
Nappula* Asema::mt = new Nappula(L"\u265C", 1, MT);
Nappula* Asema::ml = new Nappula(L"\u265D", 1, ML);
Nappula* Asema::mr = new Nappula(L"\u265E", 1, MR);
Nappula* Asema::ms = new Nappula(L"\u265F", 1, MS);

Asema::Asema()
{

	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			lauta[x][y] = NULL;
		}
	}

	//Asetetaan nappulat paikalle

	lauta[0][0] = vt;
	lauta[1][0] = vr;
	lauta[2][0] = vl;
	lauta[3][0] = vd;
	lauta[4][0] = vk;
	lauta[5][0] = vl;
	lauta[6][0] = vr;
	lauta[7][0] = vt;

	lauta[0][1] = vs;
	lauta[1][1] = vs;
	lauta[2][1] = vs;
	lauta[2][1] = vs;
	lauta[3][1] = vs;
	lauta[4][1] = vs;
	lauta[5][1] = vs;
	lauta[6][1] = vs;
	lauta[7][1] = vs;

	lauta[0][7] = mt;
	lauta[1][7] = mr;
	lauta[2][7] = ml;
	lauta[3][7] = md;
	lauta[4][7] = mk;
	lauta[5][7] = ml;
	lauta[6][7] = mr;
	lauta[7][7] = mt;

	lauta[0][6] = ms;
	lauta[1][6] = ms;
	lauta[2][6] = ms;
	lauta[2][6] = ms;
	lauta[3][6] = ms;
	lauta[4][6] = ms;
	lauta[5][6] = ms;
	lauta[6][6] = ms;
	lauta[7][6] = ms;
}



void Asema::paivitaAsema(Siirto * siirto)
{


}

int Asema::getSiirtovuoro()
{
	return 0;
}

void Asema::setSiirtovuoro(int vari)
{


}

bool Asema::getOnkoValkeaKuningasLiikkunut()
{
	return false;
}

bool Asema::getOnkoMustaKuningasLiikkunut()
{
	return false;
}

bool Asema::getOnkoValkeaDTliikkunut()
{
	return false;
}

bool Asema::getOnkoValkeaKTliikkunut()
{
	return false;
}

bool Asema::getOnkoMustaDTliikkunut()
{
	return false;
}

bool Asema::getOnkoMustaKTliikkunut()
{
	return false;
}


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
