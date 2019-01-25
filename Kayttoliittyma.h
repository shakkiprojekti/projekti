#pragma once
#include "Asema.h"
#include <Windows.h>
#include <stdio.h>
#include <fcntl.h>
#include <io.h>
#include <iostream>
#include <utility>
#include <string>

using namespace std;

class Kayttoliittyma {

public:
	Kayttoliittyma(Asema* asema);
	Asema* _asema;
	void piirraLauta();
};
