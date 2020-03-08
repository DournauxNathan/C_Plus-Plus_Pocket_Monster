#include <iostream>
#include "Monster.cpp"
#include <time.h> 

using namespace std;

int main()
{
    myTeam Hericendre;
    myTeam Germignon;
    myTeam Krokominus;

    Monster Ratatac;

    /*Variable liés au joueur*/
        int choixJoueur;
        int nPoketMonster = 1;
        std::string monMonster;
    /*!Variable liés au joueur*/

    /*Menu principal*/
        cout << "-------------\nPoket Monster !\n-------------\n\n";
        cout << "-------------\nJouer\n-------------\n\n";
        cout << "-------------\nQuitter\n-------------\n\n";
    /*!Menu principal*/

    /*Jeu*/
        cout << "Choissisez votre Poket Monster :\n";
        cout << "Hericendre [1]  | Germignon [2]  | Krokominus [3]\n\n";

        cin >> choixJoueur;

        switch(choixJoueur) 
        {
        case 1:
            cout << "Vous avez choisi Hericendre\n\n";
            monMonster = "Hericendre";
        break;

        case 2:
            cout << "Vous avez choisi Germignon\n\n";
            monMonster = "Germignon";
        break;

        case 3:
            cout << "Vous avez choisi Krokominus\n\n";
            monMonster = "Krokominus";
        break;
        }

        while(nPoketMonster != 0)
        {
        cout << "Un Rattata sauavge apparait\n\n";

        cout << monMonster << "a l'attaque !\n\n";
        }
    /*!Jeu*/

    return 0
}