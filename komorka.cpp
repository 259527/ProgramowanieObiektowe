#include "komorka.h"

std::string intCell::pobierzString()
{
    return std::to_string(Wartosc);
}
void intCell::ustaw(std::string Wartosc)
{
    try
    {
        this->Wartosc = std::stoi(Wartosc);
    }
    catch (...)
    {
    }
}
bool intCell::obliczalna()
{
    return true;
}

std::string stringCell::pobierzString()
{
    return Wartosc;
}

void stringCell::ustaw(std::string Wartosc)
{
    this->Wartosc = Wartosc;
}
bool stringCell::obliczalna()
{
    return false;
}
stringCell::stringCell()
{
    Wartosc = "_";
}