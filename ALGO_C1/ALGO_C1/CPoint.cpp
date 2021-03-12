#include <stdio.h>
#include "CPoint.h"
// EXERCICE 62

// Constructeur avec paramètres
CPoint::CPoint(float f_x, float f_y) {

	this->f_x = f_x;
	this->f_y = f_y;
}

void CPoint::affiche() const {

	printf("Point en x : %.2f\n", f_x);
	printf("Point en y : %.2f\n\n", f_y);
}

void CPoint::deplace(float f_x, float f_y) {

	this->f_x += f_x;
	this->f_y += f_y;
}

float CPoint::getX() const {

	return f_x;
}

float CPoint::getY() const {

	return f_y;
}

void CPoint::setX(float f_x) {

	this->f_x = f_x;
}

void CPoint::setY(float f_y) {

	this->f_y = f_y;
}