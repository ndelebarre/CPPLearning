#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string plateauJeu[8][8];
    for (int e = 0; e < 8; e++)
    {
        if (e == 0)
            cout << "  a ";
        else if (e == 1)
            cout << "b ";
        else if (e == 2)
            cout << "c ";
        else if (e == 3)
            cout << "d ";
        else if (e == 4)
            cout << "e ";
        else if (e == 5)
            cout << "f ";
        else if (e == 6)
            cout << "g ";
        else if (e == 7)
            cout << "h ";
    }
    cout << endl;

    string pieces[8];
    for (int e = 0; e < 8; e++)
    {
        if (e == 0)
            pieces[e] = "T";
        else if (e == 1)
            pieces[e] = "C";
        else if (e == 2)
            pieces[e] = "F";
        else if (e == 3)
            pieces[e] = "D";
        else if (e == 4)
            pieces[e] = "R";
        else if (e == 5)
            pieces[e] = "F";
        else if (e == 6)
            pieces[e] = "C";
        else if (e == 7)
            pieces[e] = "T";
    }

    for (int i = 0; i < 8; i++)
    {
        if (i == 0)
        {
            cout << "1";
            for (int e = 0; e < 8; e++)
            {
                cout << "|";
                cout << pieces[e];
            }
            cout << "|" << endl;
        }
        else if (i >= 7)
        {
            cout << "8";
            for (int e = 7; e >= 0; e--)
            {
                cout << "|";
                cout << pieces[e];
            }
            cout << "|" << endl;
        }
        else
        {
            cout << i + 1 << "|";

            for (int j = 0; j < 8; j++)
            {
                if (i == 1 || i == 6)
                {
                    cout << "P|";
                }
                else
                {
                    cout << " |";
                }
            }
            cout << endl;
        }
    }
}