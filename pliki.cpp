///@file

#include <fstream>
#include "pliki.h"
#include "tablica.h"
using namespace std;

void zapiszPlik(arkusz Arkusz, string nazwa)
{
    ofstream plik(nazwa);
    if(plik.good())
        {
         plik << Arkusz.rozY << endl;
         plik << Arkusz.rozX << endl;

         for(int y = 0; y < Arkusz.rozY; y++)
            {
             for(int x = 0; x < Arkusz.rozX; x++)
                {
                 plik << Arkusz.tablica[y][x] << (x < Arkusz.rozX - 1 ? ", " : "");
                }
                if (y < Arkusz.rozY - 1)
                    {
                     plik << endl;
                    }
             }
         }


}


int wczytajPlik(arkusz *Arkusz, string nazwa)
{
    ifstream plik(nazwa);
    int ** tablica = nullptr;
    if(plik.good())
        {
            int rozmiarX, rozmiarY;
         plik >> rozmiarY;
         plik >> rozmiarX;
         tablica = stworzTablice(rozmiarX, rozmiarY);
         for(int y = 0; y < rozmiarY; y++)
            {
             for(int x = 0; x < (rozmiarX) - 1; x++)
                {
                 string wartosc;
                 getline(plik, wartosc, ',');
                 tablica[y][x] = stoi(wartosc);
                }
                plik >> tablica[y][(rozmiarX) - 1];
            }
            Arkusz->tablica = tablica;
            Arkusz->rozX = rozmiarX;
            Arkusz->rozY= rozmiarY;
        return 0;
        }
        return 1;
}

