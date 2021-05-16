///@file

#include "tablica.h"

int rozszerzTablice(arkusz *Arkusz, int nowyrozX, int nowyrozY)
{
    if (nowyrozX > 0 && nowyrozY > 0)
    {
        if (Arkusz->rozX > nowyrozX)
        {
            Arkusz->rozX = nowyrozX;
        }
        if (Arkusz->rozY > nowyrozY)
        {
            Arkusz->rozY = nowyrozY;
        }

        int **nowaTablica = stworzTablice(nowyrozX, nowyrozY);

        for (int y = 0; y < Arkusz->rozY; y++)
        {
            for (int x = 0; x < Arkusz->rozX; x++)
            {
                nowaTablica[y][x] = (Arkusz->tablica)[y][x];
            }
            delete[](Arkusz->tablica)[y];
        }

        delete[](Arkusz->tablica);

        Arkusz->tablica = nowaTablica;
        Arkusz->rozX = nowyrozX;
        Arkusz->rozY = nowyrozY;
        return 0;
    }
    return 1;
}

int stworzArkusz(int rozmiarX, int rozmiarY, arkusz *tablica)
{
    if (rozmiarX > 0 && rozmiarY > 0)
    {

        tablica->rozX = rozmiarX;
        tablica->rozY = rozmiarY;
        tablica->tablica = stworzTablice(rozmiarX, rozmiarY);
        return 0;
    }
    else
        return 1;
}
int **stworzTablice(int rozX, int rozY)
{
    int **nowatablica = new int *[rozY];

    int licznik = rozY;
    for (int i = 0; i < licznik; i++)
    {
        nowatablica[i] = new int[rozX];
    }
    return nowatablica;
}

int modWartosc(arkusz *Arkusz, int x, int y, int n)
{
    if(x >= 0 && y >= 0){
        if(x < Arkusz->rozX && y < Arkusz->rozY){

        Arkusz->tablica[y][x] = n;
        return 0;
        }
    }
    return 1;
}
