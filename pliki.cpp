///@file

#include <fstream>
#include "pliki.h"
#include "tablica.h"
using namespace std;

void zapiszPlik(arkusz Arkusz, string nazwa)
{
    ofstream plik(nazwa);
    if (plik.good())
    {
        plik << Arkusz.zwrocRozY() << endl;
        plik << Arkusz.zwrocRozX() << endl;

        for (int y = 0; y < Arkusz.zwrocRozY(); y++)
        {
            for (int x = 0; x < Arkusz.zwrocRozX(); x++)
            {
                plik << Arkusz.zwrocWartosc(x, y) << (x < Arkusz.zwrocRozX() - 1 ? ", " : "");
            }
            if (y < Arkusz.zwrocRozY() - 1)
            {
                plik << endl;
            }
        }
    }
}

int wczytajPlik(arkusz *Arkusz, string nazwa)
{
    ifstream plik(nazwa);
    int **tablica = nullptr;
    if (plik.good())
    {
        int rozmiarX, rozmiarY;
        plik >> rozmiarY;
        plik >> rozmiarX;
        arkusz nowyArkusz(rozmiarX, rozmiarY);
        for (int y = 0; y < rozmiarY; y++)
        {
            for (int x = 0; x < (rozmiarX)-1; x++)
            {
                string wartosc;
                getline(plik, wartosc, ',');
                nowyArkusz.modWartosc(x, y, stoi(wartosc));
            }
            plik >> tablica[y][(rozmiarX)-1];
        }
        *Arkusz = nowyArkusz;
        return 0;
    }
    return 1;
}
