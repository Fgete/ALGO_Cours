#include <stdio.h>
#include <iostream>
#include <string>
#include "cadre.h"

using namespace std;


int main() {

	char* pat1 = new char[LENGTH];
	strcpy_s(pat1, LENGTH, "strip");
	char* nom1 = new char[LENGTH];
	strcpy_s(nom1, LENGTH, "cadre1");

	Cadre c0;
	Cadre c1(1, 2, 3, 4, 0, pat1, nom1);

	Cadre c2(c1);

	c0.PrintCadreEnchor();
	c1.PrintCadreSize();
	c2.PrintCadreSize();

	c0.SetCadreEnchor(1, 2);
	c0.SetCadreSize(3, 4);

	c0.PrintCadreEnchor();
	c0.PrintCadreSize();
	
	c1.PrintCadreSurface();
	c1.PrintCadrePerimeter();

	c0.PrintIsSquare();

	c0.PrintCadrePattern();
	c1.PrintCadrePattern();

	return 0;
}