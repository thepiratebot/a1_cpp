//
// Created by Brice - DevOps on 29/09/2021.
//

#ifndef TP2_RECTANGLE_H
#define TP2_RECTANGLE_H
#include "point.h"

class Rectangle {
private:
    int _longueur, _largeur;
    Point _sup_gauche;

public:
    /* CONSTRUCTORS */
    Rectangle(int Longueur, int Largeur);
    Rectangle(int Longueur, int Largeur, Point Point);

    /* GETTER */
    int getLongueur() const;
    int getLargeur() const;
    Point getSupGauche() const;

    /* SETTER */
    void setLongueur(int Longueur);
    void setLargeur(int Largeur);
    void setSupGauche(Point Point);

    /* METHODS */
    float getPerimetre() const;
    float getSurface() const;
    void afficher();
};

#endif //TP2_RECTANGLE_H
