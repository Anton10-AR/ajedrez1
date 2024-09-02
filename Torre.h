#pragma once
#include <iostream>
#include "Pieza.h"
using namespace std;

class Torre : public Pieza {
public:

	bool puedoIrA(short f, short c) {
		return true;
	}

	void avanzar() {

	}

};

