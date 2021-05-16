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
    cout << "7. Wyjście z programu \n";
}

void menu()
{
    int **tablica;
    int x;
    int y;
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
            tablica = stworzTablice(&x, &y);
            break;
        case 2:
            wyswietlTablice(tablica, x, y);
            break;
        case 3:
            int nowX, nowY;
            cout << "Wprowadz nowy rozmiar X i nowy rozmiar Y";
            cin >> nowX >> nowY;
            rozszerzTablice(&tablica, &x, &y, nowX, nowY);
            break;
        case 4:
            tablica = wczytajPlik(&x, &y);
            break;
        case 5:
            zapiszPlik(tablica, x, y);
            break;
        case 6:
            int selX, selY;
            cout << "Podaj którą kolumnę chcesz zmienić";
            cin >> selX;
            cout << "Podaj który wiersz chcesz zmienić";
            cin >> selY;
            if (selX < x && selX >= 0)
            {
                if (selY < y && selY >= 0)
                {

                    cout << "Podaj wartość";
                    int wart;
                    cin >> wart;
                    modWartosc(tablica, selX, selY, wart);

                }
            }
            break;
            case 7:
            exit(0);
            break;
        }
    }
}
