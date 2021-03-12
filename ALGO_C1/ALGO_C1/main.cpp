#include "CPoint.h"
#include "DPoint.h"
#include <stdio.h>


int main() {

    // EXERCICE 62
    CPoint p0;
    CPoint p1(5, .6);

    p0.affiche();
    p0.deplace(5, .6);
    p0.affiche();
    p1.affiche();

    // EXERCICE 63
    DPoint p2;
    p2.setX(8);
    p2.setY(6);

    printf("Absisse = %.2f\n", p2.abscisse());
    printf("Ordonnee = %.2f\n\n", p2.ordonnee());

    // EXERCICE 64
    p2.homothesie(2);
    p2.affiche();
    
    p2.rotation(30);
    p2.affiche();
    printf("Rho = %.2f\n", p2.rho());
    printf("Theta = %.2f\n\n", p2.theta());

    return 0;

}