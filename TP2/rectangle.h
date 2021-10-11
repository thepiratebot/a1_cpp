//
// Created by Brice - DevOps on 29/09/2021.
//

#ifndef TP2_RECTANGLE_H
#define TP2_RECTANGLE_H
#include "point.h"

class rectangle {
private:
    int _longueur, _largeur;
    Point _sup_gauche;

public:
    /* GETTER */
    int get_longueur();
    int get_largeur();
    Point get_sup_gauche();
    /* SETTER */
    void set_longueur(int Longueur);
    void set_largeur(int Largeur);
    void set_sup_gauche(Point Point);
    /* METHODS */
    float get_perimetre();
    void get_surface();
    void afficher();
};

#endif //TP2_RECTANGLE_H
