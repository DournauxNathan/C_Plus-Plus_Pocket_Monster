#include <iostream>
#include "Monster.cpp"
#include <time.h> 

using namespace std;

int main()
{
    myTeam Hericendre;
    myTeam Germignon;
    myTeam Krokominus;

    Monster Rattata;

    /*Variable liés au joueur*/
        int choixJoueur;
        int nPoketMonster = 1;
        std::string monMonster;
    /*!Variable liés au joueur*/

    /*Variable liés au monstres*/
        int choixMonstre = rand()%4-1;
    /*!Variable liés au monstres*/

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

        cout << "Un Rattata sauvage apparait\n\n";
        cout << monMonster << "a l'attaque !\n\n";

        while (monMonster.getPv() > 0)
        {
            cout << "_________________________________\n\n";
            cout << "Rattata\nHP: " << Rattata.getVie() << "\n\n";
            cout << "---------------------------------\n\n";
            cout << monMonster << "\nHP: " << monMonster.getVie() << "\n\n";
            cout << "_________________________________\n\n";

            /*Action du joueur*/
                cout << "Attaquer[1] | ++ \n\n++ | ++\n\n";

                cin << choixJoueur;
                switch (choixJoueur) 
                {
                    case 1:
                        cout << "Attaque1[1] | Attaque2[2]\nAttaque3[3] | Attaque4[4]\n\n";

                        cin << choixJoueur;
                        switch (choixJoueur) 
                        {
                            case 1:
                                cout << monMonster << "lance attaque1\n";
                                Rattata.setVie(-5);
                                cout << Ce n'est pas tres efficace\n";
                                
                            break;

                            case 2:
                                cout << monMonster << "lance attaque2\n";
                                Rattata.setVie(-10);
                                cout << "C'est super efficace\n";
                            break;

                            case 3:
                                cout << monMonster << "lance attaque3\n";
                                Rattata.setVie(-10);
                                cout << "C'est super efficace\n";
                            break;

                            case 4:
                                cout << monMonster << "lance attaque4\n";
                                Rattata.setVie(-5);
                                cout << "Ce n'est pas tres efficace"\n";
                            break;
                        }
                    break;
                }
            /*!Action du joueur*/

            /*Action de l'ennemi*/
                switch (choixMonstre) 
                {
                    case 1:
                        cout << "Le Rattata lance attaque1\n";
                        monMonster.setVie(-5);
                        cout << "Ce n'est pas tres efficace\n";
                    break;

                    case 2:
                        cout << "Le Rattata lance attaque2\n";
                        monMonster.setVie(-5);
                        cout << "C'est super efficace\n";
                    break;

                    case 3:
                        cout << "Le Rattata lance attaque3\n";
                        monMonster.setVie(-5);
                        cout << "Ce n'est pas tres efficace\n";
                    break;

                    case 4:
                        cout << "Le Rattata lance attaque4\n";
                        monMonster.setVie(-5);
                        cout << "C'est super efficace\n"\n";
                    break;
                }
            /*!Action de l'ennemi*/


            if (pokachu.getPv() >= 0)
            {
                cout << monMonster << "est KO";
            }
        }

    /*!Jeu*/    

    return 0
}