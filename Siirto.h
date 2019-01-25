#pragma once
#include "Ruutu.h"
class Siirto {
public:
	Siirto(Ruutu, Ruutu);
	Siirto() {}
	Siirto(bool lyhytLinna, bool pitkaLinna); // Poikkeussiirto linnoitusta varten
	Ruutu getAlkuruutu();
	Ruutu getLoppuruutu();
	bool onkoLyhytLinna();
	bool onkoPitkälinna();
private:
	Ruutu alkuRuutu;
	Ruutu loppuRuutu;
	int miksiKorotetaan = 0;
	bool lyhytLinna;
	bool pitkalinna;
};
