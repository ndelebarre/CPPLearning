#include <iostream> //inclusion de bibliothèque
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    // titre du programme
    cout << "----------------------" << endl;
    cout << "bienvenu au juste prix" << endl;
    cout << "----------------------" << endl;

    srand(time(NULL));
    auto nbADeviner = rand() % 1000;
    cout << nbADeviner << endl;
    auto prop{0};
    auto nbTentatives{0};

    do
    {
        cin >> prop;

        if (prop < 10000 && prop >= 0)
        {
            nbTentatives++;
            if (prop < nbADeviner)
            {
                if (nbADeviner - prop > 100)
                {
                    cout << "c'est baucoup plus grand" << endl;
                }
                else
                {
                    cout << "plus grand" << endl;
                }
            }
            else if (prop > nbADeviner)
            {
                if (prop - nbADeviner > 100)
                {
                    cout << "c'est baucoup plus petit" << endl;
                }
                else
                {
                    cout << "plus petit" << endl;
                }
            }
            else
            {
                cout << "Bravo vous avez trouve le nombre mystere!" << endl;
            }
        }
    } while (nbADeviner != prop && prop >= 0);

    if (prop == nbADeviner)
    {
        cout << "partie terminee ! "
             << " en " << nbTentatives << " tentatives " << endl;
    }
    else
    {
        cout << "parties abandonee car mauvaise valeur entrée" << endl;
    }

    return EXIT_SUCCESS;
}