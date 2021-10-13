//
// Created by Brice - DevOps on 12/10/2021.
//

#ifndef TP2_CERCLE_H
#define TP2_CERCLE_H
#include "point.h"

class Cercle {
private:
    int _diametre;
    Point _centre;

public:
    /* CONSTRUCTORS */
    Cercle(int diametre, Point centre);

    /* GETTER */
    int getDiametre() const;
    Point getCentre() const;

    /* SETTER */
    void setDiametre(int Diametre);
    void setCentre(Point Centre);

    /* METHODS */
    float getPerimetre() const;
    float getSurface() const;
    bool onPerimeter(Point Point);
    bool insideCercle(Point Point);

    void afficher();
};


#endif //TP2_CERCLE_H
