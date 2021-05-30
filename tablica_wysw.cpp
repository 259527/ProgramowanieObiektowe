#include <iostream>
#include "tablica_wysw.h"
using namespace std;
void wyswietlTablice(arkusz Arkusz)
{
    int i, j;
    for (i = 0; i < Arkusz.zwrocRozY(); i++)
    {
        for (j = 0; j < Arkusz.zwrocRozX(); j++)
        {
            cout << Arkusz.zwrocWartosc(j,i) << "\t";
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
    for (int i = 0; i < Arkusz.zwrocRozX(); i++)
    {
        suma = Arkusz.zwrocWartosc(i,0);
        min = Arkusz.zwrocWartosc(i,0);
        max = Arkusz.zwrocWartosc(i,0);

        for (int j = 1; j < Arkusz.zwrocRozY(); j++)
        {
            suma += Arkusz.zwrocWartosc(i,j);
            if (min > Arkusz.zwrocWartosc(i,j))
            {
                min = Arkusz.zwrocWartosc(i,j);
            }
            if (max < Arkusz.zwrocWartosc(i,j))
            {
                max = Arkusz.zwrocWartosc(i,j);
            }
        }
        cout << "Parametry kolumny " << i << endl;
        cout << "Suma: " << suma << endl;
        cout << "Minimum: " << min << endl;
        cout << "Maksimum: " << max << endl;
        cout << "Średnia: " << (suma * 1.0) / Arkusz.zwrocRozY() << endl;
    }
}

void wypiszParWierszy(arkusz Arkusz)
{
    int suma, min, max;
    for (int i = 0; i < Arkusz.zwrocRozY(); i++)
    {
        suma = Arkusz.zwrocWartosc(0,i);
        min = Arkusz.zwrocWartosc(0,i);
        max = Arkusz.zwrocWartosc(0,i);

        for (int j = 1; j < Arkusz.zwrocRozX(); j++)
        {
            suma += Arkusz.zwrocWartosc(j,i);
            if (min > Arkusz.zwrocWartosc(j,i))
            {
                min = Arkusz.zwrocWartosc(j,i);
            }
            if (max < Arkusz.zwrocWartosc(j,i))
            {
                max = Arkusz.zwrocWartosc(j,i);
            }
        }
        cout << "Parametry wiersza " << i << endl;
        cout << "Suma: " << suma << endl;
        cout << "Minimum: " << min << endl;
        cout << "Maksimum: " << max << endl;
        cout << "Średnia: " << (suma * 1.0) / Arkusz.zwrocRozX() << endl;
    }
}