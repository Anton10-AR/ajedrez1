#include <iostream>
#include "Pieza.h"
#include "Peon.h"
#include "Torre.h"
using namespace std;

int main()
{
	Pieza p1;
	cout << p1.getFila() << " " << p1.getColumna() << endl;

	Pieza p2(10, 10, 'N');
}