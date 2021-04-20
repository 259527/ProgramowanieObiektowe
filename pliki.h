///@file
using namespace std;

/**
* \brief Funkcja zapisująca arkusz do pliku.
*
* @param[in] tablica tablica do zapisu pliku
* @param[in] rozmiarX szerokość tablicy zapisywanej
* @param[in] rozmiarY wysokość tablicy zapisywanej
* @param[in] nazwa nazwa zapisanego pliku
*/
void zapiszPlik(int ** tablica, int rozmiarX, int rozmiarY, string nazwa);

/**
* \brief Funkcja wczytująca dane z pliku.
*
* @param[out] rozmiarX wprowadzenie szerokośc tablicy z pliku
* @param[out] rozmiarY wprowadzenie wysokości tablicy z pliku
* @param[in] nazwa nazwa pliku który chcemy wczytać
* @return zwraca wczytaną tablicę
*/
int ** wczytajPlik(int * rozmiarX, int rozmiarY, string nazwa);


