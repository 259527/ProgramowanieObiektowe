#include <iostream>
#include "tablica_wysw.h"
using namespace std;
void wyswietlTablice(arkusz Arkusz)
{
    int i, j;
    for (i = 0; i < Arkusz.rozY; i++)
    {
        for (j = 0; j < Arkusz.rozX; j++)
        {
            cout << Arkusz.tablica[i][j] << "\t";
        }
        cout << endl;
    }
}

void wypiszParametry(arkusz Arkusz)
{
    int opcje;
    cout << "Wypisz prametry kolumn czy wierszy \n";
    cout << "1. Kolumn \n";
    cout << "2. Wierszy \n";
    cin >> opcje;
    if (opcje == 1)
    {
        wypiszParKolumn(Arkusz);
    }
    else if (opcje == 2)
    {
        wypiszParWierszy(Arkusz);
    }
}

void wypiszParKolumn(arkusz Arkusz)
{
    int suma, min, max;
    for (int i = 0; i < Arkusz.rozX; i++)
    {
        suma = Arkusz.tablica[0][i];
        min = Arkusz.tablica[0][i];
        max = Arkusz.tablica[0][i];

        for (int j = 1; j < Arkusz.rozY; j++)
        {
            suma += Arkusz.tablica[j][i];
            if (min > Arkusz.tablica[j][i])
            {
                min = Arkusz.tablica[j][i];
            }
            if (max < Arkusz.tablica[j][i])
            {
                max = Arkusz.tablica[j][i];
            }
        }
        cout << "Parametry kolumny " << i << endl;
        cout << "Suma: " << suma << endl;
        cout << "Minimum: " << min << endl;
        cout << "Maksimum: " << max << endl;
        cout << "Średnia: " << (suma * 1.0) / Arkusz.rozY << endl;
    }
}

void wypiszParWierszy(arkusz Arkusz)
{
    int suma, min, max;
    for (int i = 0; i < Arkusz.rozY; i++)
    {
        suma = Arkusz.tablica[i][0];
        min = Arkusz.tablica[i][0];
        max = Arkusz.tablica[i][0];

        for (int j = 1; j < Arkusz.rozX; j++)
        {
            suma += Arkusz.tablica[i][j];
            if (min > Arkusz.tablica[i][j])
            {
                min = Arkusz.tablica[i][j];
            }
            if (max < Arkusz.tablica[i][j])
            {
                max = Arkusz.tablica[i][j];
            }
        }
        cout << "Parametry wiersza " << i << endl;
        cout << "Suma: " << suma << endl;
        cout << "Minimum: " << min << endl;
        cout << "Maksimum: " << max << endl;
        cout << "Średnia: " << (suma * 1.0) / Arkusz.rozX << endl;
    }
}