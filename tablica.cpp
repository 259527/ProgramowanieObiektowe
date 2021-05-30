///@file

#include "tablica.h"

int arkusz::rozszerzTablice(int nowyrozX, int nowyrozY)
{
    if (nowyrozX > 0 && nowyrozY > 0)
    {
        if (rozX > nowyrozX)
        {
            rozX = nowyrozX;
        }
        if (rozY > nowyrozY)
        {
            rozY = nowyrozY;
        }

        int **nowaTablica = stworzTablice(nowyrozX, nowyrozY);

        for (int y = 0; y < rozY; y++)
        {
            for (int x = 0; x < rozX; x++)
            {
                nowaTablica[y][x] = (tablica)[y][x];
            }
            delete[](tablica)[y];
        }

        delete[](tablica);

        tablica = nowaTablica;
        rozX = nowyrozX;
        rozY = nowyrozY;
        return 0;
    }
    return 1;
}

arkusz::arkusz(int x, int y)
{

    rozX = x;
    rozY = y;
    tablica = stworzTablice(x, y);
}
int stworzArkusz(int rozmiarX, int rozmiarY, arkusz *tablica)
{
    if (rozmiarX > 0 && rozmiarY > 0)
    {

        arkusz nowaTablica(rozmiarX, rozmiarY);
        *tablica = nowaTablica;
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

int arkusz::modWartosc(int x, int y, int n)
{
    if (x >= 0 && y >= 0)
    {
        if (x < rozX && y < rozY)
        {

            tablica[y][x] = n;
            return 0;
        }
    }
    return 1;
}
int arkusz::zwrocWartosc(int x, int y)
{

    return tablica[y][x];
}

int arkusz::zwrocRozX()
{
    return rozX;
}
int arkusz::zwrocRozY()
{
    return rozY;
}