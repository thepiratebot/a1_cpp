//
// Created by Brice - DevOps on 26/10/2021.

//•Case vide : retourne true ou false si la case donnée en paramètre est libre ou non.
//•Déposer un jeton. Cette méthode permet de déposer un jeton d’un joueur donné sur
//la case spécifiée en paramètre.
//•Ligne complète. retourne true si la ligne donnée en paramètre est rempli par des
//jetons du joueur dont l’identifiant est donné en paramètre.
//•Colonne complète. retourne true si la colonne donnée en paramètre est rempli par
//des jetons du joueur dont l’identifiant est donné en paramètre.
//•Diagonale complète. retourne true si la diagonale donnée en paramètre est rempli
//par des jetons du joueur dont l’identifiant est donné en paramètre.
//• Victoire joueur. retourne true si l’utilisateur dont l’identifiant est donné en
//paramètre a rempli une condition de victoire.
//•Affichage de la grille

#ifndef TP3_GRILLEMORPION_H
#define TP3_GRILLEMORPION_H


class GrilleMorpion {
public:
    /* METHODS */
    bool emptyCell();
    void setToken();

    bool checkRow();
    bool checkColumn();
    bool checkDiagonal();
    bool playerVictory();

    void showGrid();
};


#endif //TP3_GRILLEMORPION_H
