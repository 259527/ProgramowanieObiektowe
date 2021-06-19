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
        for (int i = 0; i < Arkusz.zwrocRozX(); i++)
        {
            plik << Arkusz.zwrocTyp(i) << "\t";
        }
        plik << endl;
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
    if (plik.good())
    {
        int rozmiarX, rozmiarY;
        plik >> rozmiarY;
        plik >> rozmiarX;
        bool *typy = new bool[rozmiarX];
        for (int i = 0; i < rozmiarX; i++)
        {
            plik >> typy[i];
        }
        arkusz nowyArkusz(rozmiarX, rozmiarY, typy);
        for (int y = 0; y < rozmiarY; y++)
        {
                string wartosc;
            for (int x = 0; x < (rozmiarX)-1; x++)
            {
                getline(plik, wartosc, ',');
                nowyArkusz.modWartosc(x, y, (wartosc));
            }
           getline(plik, wartosc, '\n');
                nowyArkusz.modWartosc(rozmiarX -1, y, (wartosc)); 
        }
        *Arkusz = nowyArkusz;
        return 0;
    }
    return 1;
}
