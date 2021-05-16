///@file
#pragma once

/**
* \brief Funkcja kontrolująca działanie programu
*
* Funkcja zajmująca się obsługą menu i zarządzaniem tym co będzie wywoływane
*/
void wypiszmenu();

/**
* \brief Funkcja tworząca menu.
*
*Funkcja tworząca listę pozycji menu
*/
void menu();

/**
* \brief Funkcja tworząca nową tablicę
*
* Funkcja zawierająca interfejs, który umozliwia tworzenie nowej  tablicy dwuwyniarowej
* zwraca wskaźnik nawskaźnik typu int.
*
* @param rozmiarX [out] wartość szerokości nowej tablicy
* @param rozmiarY [out] wartość wysokości nowej tablicy
* @return Tablice do wykorzystania w arkuszu
**/
int ** stworzArkusz(int* rozmiarX, int* rozmiarY);

/**
* \brief Funkcja modyfikująca rozmiar arkusza
* 
* Interfejs umożliwiający rozszerzanie rozmiaru arkusza
*
* @param tablica [in,out] wskaźnik na poprzednią tablicę
* @param rozmiarX [in,out] parametr zawiera szerokość arkusza modyfikowanego, parametr jest * modyfikowany i zawiera nową szerokość
* @param rozmiarY [in,out] parametr zawiera wysokośc arkusza modyfikowanego, parametr jest * modyfikowany i zawiera nową wysokość
*/
void rozszerzArkusz(int *** tablica, int * rozmiarX, int * rozmiarY);




