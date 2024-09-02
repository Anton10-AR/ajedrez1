#pragma once
#include <iostream>
#include "Pieza.h"
using namespace std;

class Peon : public Pieza {
public:
	short direccion = getEquipo() == 'B' ? 2 : 8;

	bool puedoIrA(short f, short c) {
		return true;
	}

	void avanzar() {

	}

};