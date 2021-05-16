#include <iostream>
using namespace std;
void wyswietlTablice(int ** tab, int rozX, int rozY)
{
    int i, j ;
    for (i = 0 ; i < rozY; i++){
        for (j = 0; j < rozX; j++){
            cout << tab [i][j] << "\t";
            
        }
        cout << endl;
    }
}