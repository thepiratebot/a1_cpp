//
// Created by Brice - DevOps on 29/09/2021.
//

#include "rectangle.h"

    /* GETTER */
int rectangle::get_longueur()
{
    return _longueur;
}

int rectangle::get_largeur()
{
    return _largeur;
}

Point get_sup_gauche()
{
    return _sup_gauche;
}

    /* SETTER */
void set_longueur(int Longueur)
{
    _longueur = Longueur;
}

void set_largeur(int Largeur)
{
    _largeur = Largeur;
}

void set_sup_gauche(Point Point)
{
    _sup_gauche = Point;
}

    /* METHODS */
int get_perimetre()
{
    return get_longueur() * 2 + get_largeur() * 2;
}