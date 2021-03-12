#include <stdio.h>
#include <math.h>
#include "DPoint.h"
// EXERCICE 63

// Constructeur avec paramètres
DPoint::DPoint(float f_x, float f_y) {

	this->f_x = f_x;
	this->f_y = f_y;
}

void DPoint::affiche() const {

	printf("Point en x : %.2f\n", f_x);
	printf("Point en y : %.2f\n\n", f_y);
}

void DPoint::homothesie(float f_h) {

	this->f_x = f_x * f_h;
	this->f_y = f_y * f_h;
}

void DPoint::rotation(float f_r) {
	float theta = atan(f_x / f_y);
	float rho = pow(pow(f_x, 2) + pow(f_y, 2), .5);

	this->f_x = cos(theta + f_r) * rho;
	this->f_y = sin(theta + f_r) * rho;
}

float DPoint::rho() {

	return pow(pow(f_x, 2) + pow(f_y, 2), .5);
}

float DPoint::theta() {

	return atan(f_x / f_y);
}

float DPoint::abscisse() const {

	return f_x;
}

float DPoint::ordonnee() const {

	return f_y;
}

void DPoint::setX(float f_x) {

	this->f_x = f_x;
}

void DPoint::setY(float f_y) {

	this->f_y = f_y;
}