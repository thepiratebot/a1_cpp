#include "Private_Library/Grid.cpp"
#include "GrilleMorpion.cpp"
#include "GrilleP4.cpp"
#include "Jeu.cpp"
#include <iostream>

using namespace std;

int main()
{
    Jeu Game;
    int choose;

    std::cout << "A quel jeu souhaitez-vous jouer ?" << std::endl << "1 Morpion" << std::endl << "2 Puissance 4";
    std::cin >> choose;

    if (choose == 1)
    {
        Game.newMorpionGame();
    } else if (choose == 2)
    {
        Game.newP4Game();
    }

    return 0;
}