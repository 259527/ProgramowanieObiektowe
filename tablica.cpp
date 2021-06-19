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
        bool *noweTypy = new bool[nowyrozX];
        for (int i = 0; i < nowyrozX; i++)
        {
            if (i < rozX)
            {
                noweTypy[i] = typy[i];
            }
            else
            {
                noweTypy[i] = false;
            }
        }
        Cell ***nowaTablica = stworzTablice(nowyrozX, nowyrozY, noweTypy);

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

arkusz::arkusz(int x, int y, bool *typy)
{

    rozX = x;
    rozY = y;
    this->typy = typy;
    tablica = stworzTablice(x, y, typy);
}
int stworzArkusz(int rozmiarX, int rozmiarY, arkusz *tablica, bool *typy)
{
    if (rozmiarX > 0 && rozmiarY > 0)
    {

        arkusz nowaTablica(rozmiarX, rozmiarY, typy);
        *tablica = nowaTablica;
        return 0;
    }
    else
        return 1;
}
Cell ***stworzTablice(int rozX, int rozY, bool *typy)
{

    Cell ***nowaTablica = new Cell **[rozY];

    for (int i = 0; i < rozY; i++)
    {
        nowaTablica[i] = new Cell *[rozX];
        for (int j = 0; j < rozX; j++)
        {
            if (typy[j])
            {
                nowaTablica[i][j] = new intCell();
            }
            else
            {
                nowaTablica[i][j] = new stringCell();
            }
        }
    }

    return nowaTablica;
}

int arkusz::modWartosc(int x, int y, std::string n)
{
    if (x >= 0 && y >= 0)
    {
        if (x < rozX && y < rozY)
        {

            tablica[y][x]->ustaw(n);
            return 0;
        }
    }
    return 1;
}
std::string arkusz::zwrocWartosc(int x, int y)
{

    return tablica[y][x]->pobierzString();
}

int arkusz::zwrocRozX()
{
    return rozX;
}
int arkusz::zwrocRozY()
{
    return rozY;
}
bool arkusz::zwrocTyp(int x)
{
    return typy[x];
}