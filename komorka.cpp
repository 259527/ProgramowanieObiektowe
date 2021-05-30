#include "komorka.h"

int intCell::pobierzWartosc()
{
    return Wartosc;
}
std::string intCell::pobierzString()
{
    return std::to_string(Wartosc);
}
void intCell::ustaw(int Wartosc)
{
    this->Wartosc = Wartosc;
}
void intCell::ustaw(std::string Wartosc)
{
    this->Wartosc = 0;
}
bool intCell::obliczalna()
{
    return true;
}

int stringCell::pobierzWartosc(){
    return 0;
}
std::string stringCell::pobierzString(){
    return Wartosc;
}
void stringCell::ustaw(int Wartosc){
    this->Wartosc = std::to_string(Wartosc);
}
void stringCell::ustaw(std::string Wartosc){
    this->Wartosc = Wartosc;
}
bool stringCell::obliczalna(){
    return false;
}
