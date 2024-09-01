#pragma once
#include <iostream>
using namespace std;

class Pieza {
private:
	short fila;
	short columna;
public:
	Pieza() {
		fila = 1;
		columna = 1;
	}

	Pieza(short f, short c) {
		fila = f;
		columna = c;
	}

	//getters y setters
	short getFila() {
		return fila;
	}

	short getColumna() {
		return columna;
	}

	void verInfo() {
		cout << fila << " " << columna << endl;
	}

	//validacion
	//bool esCeldaValida(short f, short c) {
	//	return ()
};


