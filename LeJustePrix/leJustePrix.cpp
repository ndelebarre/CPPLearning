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
    auto trouve = false;
    auto nbADeviner = rand() % 1000;
    cout << nbADeviner << endl;
    auto prop{0};

    while (trouve != true)
    {
        cin >> prop;
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
            trouve = true;
        }
    }

    return EXIT_SUCCESS;
}