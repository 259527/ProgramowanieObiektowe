///@file
#pragma once
#include "tablica.h"
using namespace std;

/**
* \brief Funkcja zapisująca arkusz do pliku.
*
* @param[in] tablica tablica do zapisu pliku
* @param[in] rozmiarX szerokość tablicy zapisywanej
* @param[in] rozmiarY wysokość tablicy zapisywanej
* @param[in] nazwa nazwa zapisanego pliku
*/
void zapiszPlik(arkusz Arkusz, string nazwa="Arkusz.csv");

/**
* \brief Funkcja wczytująca dane z pliku.
*
* @param[out] rozmiarX wprowadzenie szerokośc tablicy z pliku
* @param[out] rozmiarY wprowadzenie wysokości tablicy z pliku
* @param[in] nazwa nazwa pliku który chcemy wczytać
* @return zwraca wczytaną tablicę
*/
int wczytajPlik(arkusz *Arkusz, string nazwa="Arkusz.csv");


