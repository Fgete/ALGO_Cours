#pragma once
// EXERCICE 63

class DPoint {

private:
	// Donn�es membres
	float f_x;
	float f_y;

protected:
	// Elements prot�g�s accessible par l'h�ritage

public:
	// Fonctions membres
	DPoint(float f_x = 0, float f_y = 0);

	void affiche() const;
	void homothesie(float f_h);
	void rotation(float f_r);

	float rho();
	float theta();

	// Accesseurs
	float abscisse() const;
	float ordonnee() const;

	// Mutateurs
	void setX(float f_x);
	void setY(float f_y);

};