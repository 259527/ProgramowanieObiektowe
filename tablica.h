///@file
#pragma once
#include "komorka.h"

class arkusz
{
    Cell ***tablica;
    int rozX;
    int rozY;
    bool *typy;

public:
bool zwrocTyp(int x);
arkusz(){}
arkusz(int x, int y, bool* typy);
std::string zwrocWartosc(int x, int y);

int zwrocRozX();
int zwrocRozY();

    /**
* \brief Modyfikacja rozmiaru tablicy
*
* Funkcja modyfikuje rozmiar tablicy
* Wartości modyfikowanej tablicy zostają zachowane wraz z redukcją bądź rozszerzeniem * * * * rozmiaru
*
* @param[in] tablica modyfikowana tablica
* @param[in] rozmiarX szerokość tablicy przed zmianą
* @param[in] rozmiarY wysokośc tablicy przed zmianą
* @param[in] nowyrozX nowa szerokość tablicy
* @param[in] nowyrozY nowa wysokość tablicy
*/
    int rozszerzTablice(int nowyrozX, int nowyrozY);

    /**
*\brief Wstawia wartość do komórki w tablicy
*
* Funkcja wartość do komórki w tablicy
* Funkcja nie kontroluje poprawności
*
* @param[in,out] tablica tablica do której wprowadzamy dane
* @param[in] x kolumna
* @param[in] y wiersz
* @param[in] n wartość
*/
    int modWartosc(int x, int y, std::string n);
};

/**
* \brief Interfejs uzytkownika wprowadzania nowej wartości
*
* Funkcja interfejsu wprowadzenia wartości do tablicy
* Wartośc wprowadzona spoza przedziału zostanie zablokowana
* 
* @param[in,out] tablica modyfikowana tablica
* @param[in] rozX szerkość modyfikowanej tablicy
* @param[in] rozY wysokość modyfikowanej tablicy
*/
void wprowadzWartosc(int **tablica, int rozX, int rozY);

/**
* \brief Tworzy nową tablicę (dwuwymiarową)
*
* Funkcja tworzy nową tablice o zadanym rozmiarze
*
* @param[in] rozmiarX szerokośc nowej tablicy 
* @param[in] rozmiarY wysokość nowej tablicy
* @return Nowa tablica
*/
Cell ***stworzTablice(int rozX, int rozY, bool* typy);

int stworzArkusz(int rozmiarX, int rozmiarY, arkusz *tablica, bool *typy);

