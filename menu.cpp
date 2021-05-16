#include <iostream>
#include "tablica.h"
#include "tablica_wysw.h"
#include "menu.h"
#include "pliki.h"
using namespace std;

void wypiszmenu()
{
    cout << "1. Stworz tablice \n";
    cout << "2. Wyswietl tablice \n";
    cout << "3. Rozszerz tablice \n";
    cout << "4. Wczytaj tablice \n";
    cout << "5. Zapisz tablice \n";
    cout << "6. Modyfikacja wartości \n";
    cout << "7. Wypisz prametry tablicy \n";
    cout << "8. Wyjście z programu \n";
}

void menu()
{
    int **tablica;
    int x;
    int y;
    arkusz Arkusz;
    for (;;)
    {
        wypiszmenu();
        cout << "Wybierz z listy co  chcesz zrobic" << endl;
        int i;
        cin >> i;
        switch (i)
        {
        case 1:
            cout << "Wpisz ile chcesz kolumn";
            cin >> x;
            cout << "Wpisz ile chcesz wierszy";
            cin >> y;
            if (stworzArkusz(x, y, &Arkusz))
            {
                cout << "Nie poprawny rozmiar tablicy";
            }
            break;
        case 2:
            wyswietlTablice(Arkusz);
            break;
        case 3:
            int nowX, nowY;
            cout << "Wprowadz nowy rozmiar X i nowy rozmiar Y";
            cin >> nowX >> nowY;
            if (rozszerzTablice(&Arkusz, nowX, nowY))
            {
                cout << "Nie poprawny rozmiar tablicy";
            }
            break;
        case 4:
            wczytajPlik(&Arkusz);
            break;
        case 5:
            zapiszPlik(Arkusz);
            break;
        case 6:
            int selX, selY;
            cout << "Podaj którą kolumnę chcesz zmienić";
            cin >> selX;
            cout << "Podaj który wiersz chcesz zmienić";
            cin >> selY;

            cout << "Podaj wartość";
            int wart;
            cin >> wart;
            if (modWartosc(&Arkusz, selX, selY, wart))
            {
                cout << "Wybrano element spoza rozmiaru tablicy";
            }

            break;
            case 7:

            wypiszParametry(Arkusz);
            break;

            case 8:
            exit(0);
            break;
        }
    }
}
