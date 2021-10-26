//
// Created by Brice - DevOps on 26/10/2021.
//

#include "Jeu.h"
#include "GrilleP4.h"
#include "GrilleMorpion.h"
#include "Private_Library/Grid.h"

/* CONSTRUCTORS */
Jeu::Jeu() {}

/* METHODS */
void Jeu::newMorpionGame() {
    GrilleMorpion Grid(3,3);

    std::string playerOne;
    std::string playerTwo;
    std::string ask;

    bool isPlaying = true;
    bool whoPlay = true;

    std::cout << "Veuillez saisir le pseudonyme du 1er joueur : " << std::endl;
    std::cin >> playerOne;

    std::cout << "Veuillez saisir le pseudonyme du 2em joueur : " << std::endl;
    std::cin >> playerTwo;

    int x, y;

    while (isPlaying) {
        for (int i = 0; i < 9; i++) {
            Grid.showGrid();

            if (whoPlay) {
                std::cout << std::endl << playerOne << " a vous de jouer !" << std::endl;
                std::cout << "Saissiez X : [1-3] " << std::endl;
                std::cin >> x;
                std::cout << "Saissiez Y : [1-3] " << std::endl;
                std::cin >> y;

                if (Grid.isCellEmpty(x, y)) {
                    Grid.setValue(x, y, "X");
                } else {
                    bool error = true;

                    while (error) {
                        if (x > 0 && y > 0 && x < 4 && y < 4 && Grid.isCellEmpty(x, y)) {
                            Grid.setValue(x, y, "X");
                            error = false;
                        } else {
                            std::cout
                                    << "Erreur dans votre saisie, vérifiez que la case soit bien vide et que vous ne dépassé pas la taille du tableau !"
                                    << std::endl;
                            std::cout << "Saissiez X : [1-3] " << std::endl;
                            std::cin >> x;
                            std::cout << "Saissiez Y : [1-3] " << std::endl;
                            std::cin >> y;
                        }
                    }

                }

                if (Grid.playerVictory(x, y, "X")) {
                    std::cout << "Bravo " << playerOne << " vous avez gagné !";
                    break;
                }

                whoPlay = !whoPlay;
            } else {
                std::cout << std::endl << playerTwo << " a vous de jouer !" << std::endl;
                std::cout << "Saissiez X : [1-3] " << std::endl;
                std::cin >> x;
                std::cout << "Saissiez Y : [1-3] " << std::endl;
                std::cin >> y;

                if (Grid.isCellEmpty(x, y)) {
                    Grid.setValue(x, y, "O");
                } else {
                    bool error = true;

                    while (error) {
                        if (x > 0 && y > 0 && x < 4 && y < 4 && Grid.isCellEmpty(x, y)) {
                            Grid.setValue(x, y, "O");
                            error = false;
                        } else {
                            std::cout
                                    << "Erreur dans votre saisie, vérifiez que la case soit bien vide et que vous ne dépassé pas la taille du tableau !"
                                    << std::endl;
                            std::cout << "Saissiez X : [1-3] " << std::endl;
                            std::cin >> x;
                            std::cout << "Saissiez Y : [1-3] " << std::endl;
                            std::cin >> y;
                        }
                    }

                }

                if (Grid.playerVictory(x, y, "O")) {
                    std::cout << "Bravo " << playerOne << " vous avez gagné !";
                    break;
                }

                whoPlay = !whoPlay;
            }
        }

        std::cout << "Souhaitez vous refaire une partie ? [O-N]" << std::endl;
        std::cin >> ask;

        if (ask != "O") {
            isPlaying = false;
        } else {
            Grid.clearGrid();
        }
    }
}

void Jeu::newP4Game()
{
    GrilleP4 Grid(4,7);

    std::string playerOne;
    std::string playerTwo;
    std::string ask;

    bool isPlaying = true;
    bool whoPlay = true;

    std::cout << "Veuillez saisir le pseudonyme du 1er joueur : " << std::endl;
    std::cin >> playerOne;

    std::cout << "Veuillez saisir le pseudonyme du 2em joueur : " << std::endl;
    std::cin >> playerTwo;

    int x,y;

    while (isPlaying)
    {
        for (int i = 0; i < (Grid.getHeight() * Grid.getWidth()); i++) {
            Grid.showGrid();

            if (whoPlay) {
                std::cout << std::endl << playerOne << " a vous de jouer !" << std::endl;
                std::cout << "Saissiez X : [1-7] " << std::endl;
                std::cin >> x;


                for (int i = 4; i > 0 ; i--)
                {
                    if (Grid.isCellEmpty(x,i))
                    {
                        Grid.setValue(x, i, "X");
                        y = i;
                    }

                    if (i == 1 && !Grid.isCellEmpty(x, i))
                    {
                        bool error = true;

                        while (error)
                        {
                            std::cout << "La colonne est pleine, merci d'en sélectionner une autre." << std::endl;
                            std::cout << "Saissiez X : [1-7] " << std::endl;
                            std::cin >> x;

                            for (int z = 4; z > 0; z--)
                            {
                                if (Grid.isCellEmpty(x,z))
                                {
                                    Grid.setValue(x, z, "X");
                                    y = z;
                                    error = false;
                                }
                            }
                        }
                    }
                }

                if (Grid.playerVictory(x, "X")) {
                    std::cout << "Bravo " << playerOne << " vous avez gagné !";
                    break;
                }

                whoPlay = !whoPlay;
            } else {
                std::cout << std::endl << playerTwo << " a vous de jouer !" << std::endl;
                std::cout << "Saissiez X : [1-7] " << std::endl;
                std::cin >> x;


                for (int i = 4; i > 0; i--)
                {
                    if (Grid.isCellEmpty(x,i))
                    {
                        Grid.setValue(x, i, "O");
                        y = i;
                    }

                    if (i == 1 && !Grid.isCellEmpty(x, i))
                    {
                        bool error = true;

                        while (error)
                        {
                            std::cout << "La colonne est pleine, merci d'en sélectionner une autre." << std::endl;
                            std::cout << "Saissiez X : [1-7] " << std::endl;
                            std::cin >> x;

                            for (int z = 4; z > 0; z--)
                            {
                                if (Grid.isCellEmpty(x,z))
                                {
                                    Grid.setValue(x, z, "O");
                                    y = z;
                                    error = false;
                                }
                            }
                        }
                    }
                }

                if (Grid.playerVictory(x, "X")) {
                    std::cout << "Bravo " << playerOne << " vous avez gagné !";
                    break;
                }

                whoPlay = !whoPlay;
            }
        }

        std::cout << "Souhaitez vous refaire une partie ? [O-N]" << std::endl;
        std::cin >> ask;

        if (ask != "O") {
            isPlaying = false;
        } else {
            Grid.clearGrid();
        }
    }
}