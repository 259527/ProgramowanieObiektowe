///@file

#include "tablica.h"

void rozszerzTablice(int *** tablica, int * rozmiarX, int * rozmiarY, int nowyrozX, int nowyrozY)
{
 if(*rozmiarX > nowyrozX)
    {
    *rozmiarX = nowyrozX;    
    }
 if(*rozmiarY > nowyrozY)
    {
    *rozmiarY = nowyrozY;    
    }

 int ** nowaTablica = stworzTablice(&nowyrozX, &nowyrozY);

    for(int y = 0; y < *rozmiarY; y++)
    {
        for(int x = 0; x < *rozmiarX; x++)
        {
            nowaTablica[y][x] = (*tablica)[y][x];
    
        }
        delete [] (*tablica)[y];
    }

    delete [](*tablica);

    *tablica = nowaTablica;
    *rozmiarX = nowyrozX;
    *rozmiarY = nowyrozY;

}

int ** stworzTablice(int * rozmiarX, int * rozmiarY)
{

    int ** tablica = new int* [*rozmiarY];

    int licznik = *rozmiarY;
    for(int i = 0; i < licznik; i++){
        tablica[i] = new int [*rozmiarX];
    }
    return tablica;
}

void modWartosc(int ** tablica, int x, int y, int n)
{
    tablica[y][x] = n;
}


