#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

#include "cadre.h"


Cadre::Cadre()
{
	this->enchor_x = 10;
	this->enchor_y = 5;
	this->size_x = 5;
	this->size_y = size_x * 2; // Set default value to 2*x
	this->theta = 0;
	this->s_pattern = new char[LENGTH];
	strcpy_s(this->s_pattern, LENGTH, "*");
	this->ptrCharNom_Cadre = new char[LENGTH];
	strcpy_s(this->ptrCharNom_Cadre, LENGTH, "cadre");
}

Cadre::Cadre(float enchor_x, float enchor_y, float size_x, float size_y, float theta, char *s_pattern, char *s_nom)
{
	this->enchor_x = enchor_x;
	this->enchor_y = enchor_y;
	this->size_x = size_x;
	this->size_y = size_y;
	this->theta = theta;
	this->s_pattern = new char[LENGTH];
	strcpy_s(this->s_pattern, LENGTH, s_pattern);
	this->ptrCharNom_Cadre = new char[LENGTH];
	strcpy_s(this->ptrCharNom_Cadre, LENGTH, s_nom);
}

Cadre::Cadre(Cadre& c)
{
	this->enchor_x = c.enchor_x;
	this->enchor_y = c.enchor_y;
	this->size_x = c.size_x;
	this->size_y = c.size_y;
	this->theta = 0;
	this->s_pattern = new char[LENGTH];
	strcpy_s(this->s_pattern, LENGTH, c.s_pattern);
	this->ptrCharNom_Cadre = new char[LENGTH];
	strcpy_s(this->ptrCharNom_Cadre, LENGTH, c.ptrCharNom_Cadre);
}

void Cadre::SetCadreEnchor(float enchor_x, float enchor_y)
{
	this->enchor_x = enchor_x;
	this->enchor_y = enchor_y;
}

void Cadre::SetCadreSize(float size_x, float size_y)
{
	this->size_x = size_x;
	this->size_y = size_y;
}

void Cadre::PrintCadreEnchor() const
{
	std::cout << "Enchor  x:" << this->enchor_x << " | y:" << this->enchor_y << std::endl;
}

void Cadre::PrintCadreSize() const
{
	std::cout << "Size    x:" << this->size_x << " | y:" << this->size_y << std::endl;
}

float Cadre::SurfaceCadre() const
{
	return (this->size_x * this->size_y);
}

void Cadre::PrintCadreSurface() const
{
	std::cout << "Surface : " << this->SurfaceCadre() << " uSquare" << std::endl;
}

float Cadre::PerimeterCadre() const
{
	return (this->size_x + this->size_y) * 2;
}

void Cadre::PrintCadrePerimeter() const
{
	std::cout << "Perimeter : " << this->PerimeterCadre() << " u" << std::endl;
}

bool Cadre::IsSquare() const
{
	if (this->size_x == this->size_y)
		return true;
	else
		return false;
}

void Cadre::PrintIsSquare() const
{
	if (this->IsSquare())
		std::cout << "Is square ? true" << std::endl;
	else
		std::cout << "Is square ? false" << std::endl;
}

void Cadre::PrintCadrePattern() const
{
	std::cout << "Pattern : " << this->s_pattern << std::endl;
}

float Cadre::GetCadreSizeX() const
{
	return this->size_x;
}

float Cadre::GetCadreSizeY() const
{
	return this->size_y;
}

char* Cadre::GetCadrePattern() const
{
	return this->s_pattern;
}

void Cadre::RotateCadre(float theta)
{
	this->theta = theta;
}

Cadre::~Cadre()
{
	delete[] this->s_pattern;
	delete[] this->ptrCharNom_Cadre;
}