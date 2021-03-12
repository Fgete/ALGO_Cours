#pragma once
// EXERCICE 62

class CPoint {

private :	
	// Données membres
	float f_x;
	float f_y;

protected :
	// Elements protégés accessible par l'héritage

public :
	// Fonctions membres
	CPoint(float f_x = 0, float f_y = 0);

	void affiche() const;
	void deplace(float f_x, float f_y);

	// Accesseurs
	float getX() const;
	float getY() const;

	// Mutateurs
	void setX(float f_x);
	void setY(float f_y);

};