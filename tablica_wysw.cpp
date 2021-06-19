#include <iostream>
#include "tablica_wysw.h"
using namespace std;
int zamiennaint(string wartosc)
{
    int wynik = 0;
    try
    {
        wynik = stoi(wartosc);
    }
    catch(...){}
    return wynik;
}
void wyswietlTablice(arkusz Arkusz)
{
    int i, j;
    for (i = 0; i < Arkusz.zwrocRozY(); i++)
    {
        for (j = 0; j < Arkusz.zwrocRozX(); j++)
        {
            cout << Arkusz.zwrocWartosc(j, i) << "\t";
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
        suma = zamiennaint(Arkusz.zwrocWartosc(i, 0));
        min = zamiennaint(Arkusz.zwrocWartosc(i, 0));
        max = zamiennaint(Arkusz.zwrocWartosc(i, 0));

        for (int j = 1; j < Arkusz.zwrocRozY(); j++)
        {
            suma += zamiennaint(Arkusz.zwrocWartosc(i, j));
            if (min > zamiennaint(Arkusz.zwrocWartosc(i, j)))
            {
                min = zamiennaint(Arkusz.zwrocWartosc(i, j));
            }
            if (max < zamiennaint(Arkusz.zwrocWartosc(i, j)))
            {
                max = zamiennaint(Arkusz.zwrocWartosc(i, j));
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
        suma = zamiennaint(Arkusz.zwrocWartosc(0, i));
        min = zamiennaint(Arkusz.zwrocWartosc(0, i));
        max = zamiennaint(Arkusz.zwrocWartosc(0, i));

        for (int j = 1; j < Arkusz.zwrocRozX(); j++)
        {
            suma += zamiennaint(Arkusz.zwrocWartosc(j, i));
            if (min > zamiennaint(Arkusz.zwrocWartosc(j, i)))
            {
                min = zamiennaint(Arkusz.zwrocWartosc(j, i));
            }
            if (max < zamiennaint(Arkusz.zwrocWartosc(j, i)))
            {
                max = zamiennaint(Arkusz.zwrocWartosc(j, i));
            }
        }
        cout << "Parametry wiersza " << i << endl;
        cout << "Suma: " << suma << endl;
        cout << "Minimum: " << min << endl;
        cout << "Maksimum: " << max << endl;
        cout << "Średnia: " << (suma * 1.0) / Arkusz.zwrocRozX() << endl;
    }
}