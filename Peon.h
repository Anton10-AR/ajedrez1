#pragma once
#include <iostream>
#include "Pieza.h"
using namespace std;

class Peon : public Pieza {
public:
	short direccion;

	void avanzar() {

	}

	bool puedoIrA(short f, short c) {
		return true;
	}
};