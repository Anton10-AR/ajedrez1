#pragma once
#include <iostream>
using namespace std;

class Pieza {
private:
	short fila;
	short columna;
	char equipo;
public:
	Pieza() {
		fila = 1;
		columna = 1;
		equipo = 'B';
	}

	Pieza(short f, short c, char eq) {
		fila = f;
		columna = c;
		equipo = eq;
	}

	//getters y setters
	short getFila() {
		return fila;
	}

	short getColumna() {
		return columna;
	}

	char getEquipo() {
		return equipo;
	}

	short setFila(short ff) {
		fila = ff;
	}

	short setColumna(short cc) {
		columna = cc;
	}

	void verInfo() {
		cout << fila << " " << columna << endl;
	}

	bool esCeldaValida(short f, short c) {
		f = getFila();
		c = getColumna();

	}

};


