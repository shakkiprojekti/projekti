#include <iostream>
#include "Siirto.h"
#include "Ruutu.h"
using namespace std;

Siirto::Siirto(Ruutu, Ruutu)
{

}

Siirto::Siirto(bool lyhytLinna, bool pitkaLinna)
{

}

Ruutu Siirto::getAlkuruutu()
{
	return Ruutu();
}

Ruutu Siirto::getLoppuruutu()
{
	return Ruutu();
}

bool Siirto::onkoLyhytLinna()
{
	return false;
}

bool Siirto::onkoPitkälinna()
{
	return false;
}
