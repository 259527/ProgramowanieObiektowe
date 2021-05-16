///@file
#pragma once

struct arkusz{
    int **tablica;
    int rozX;
    int rozY;

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
void wprowadzWartosc(int** tablica, int rozX, int rozY);

/**
* \brief Modyfikacja rozmiaru tablicy
*
* Funkcja modyfikuje rozmiar tablicy
* Wartości modyfikowanej tablicy zostają zachowane wraz z redukcją bądź rozszerzeniem * * * * rozmiaru
*
* @param[in,out] tablica modyfikowana tablica
* @param[in,out] rozmiarX szerokość tablicy przed zmianą
* @param[in,out] rozmiarY wysokośc tablicy przed zmianą
* @param[in] nowyrozX nowa szerokość tablicy
* @param[in] nowyrozY nowa wysokość tablicy
*/
int rozszerzTablice(arkusz *Arkusz, int nowyrozX, int nowyrozY);

/**
* \brief Tworzy nową tablicę (dwuwymiarową)
*
* Funkcja tworzy nową tablice o zadanym rozmiarze
*
* @param[in] rozmiarX szerokośc nowej tablicy 
* @param[in] rozmiarY wysokość nowej tablicy
* @return Nowa tablica
*/
int** stworzTablice(int rozX, int rozY);

int stworzArkusz(int rozmiarX, int rozmiarY, arkusz *tablica);

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
int modWartosc(arkusz *Arkusz, int x, int y, int n);


