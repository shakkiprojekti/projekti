#include "Nappula.h"
#include <iostream>
using namespace std;

Nappula::Nappula(wstring unicode, int vari, int koodi) {

	_unicode = unicode;
	_vari = vari;
	_koodi = koodi;

}

//Nappula::Nappula() {};

void Nappula::setKoodi(int koodi) {

	_koodi = koodi;

}

int Nappula::getKoodi() {

	return _koodi;

}

void Nappula::setUnicode(wstring unicode) {

	_unicode = unicode;

}

std::wstring Nappula::getUnicode() {

	return _unicode;

}

void Nappula::setVari(int vari) {

	_vari = vari;

}

int Nappula::getVari() {

	return _vari;

}
