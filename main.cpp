#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    // Gracz 1 podaje liczbe
    int i, j, proba = 1;
    cout << "Gracz 1: Podaj liczbe: " << endl;
    cin >> i;
    cout << endl;

    // Czyszczenie ekranu
    system("CLS");

    cout << "Zgadnij liczbe! ";
    cin >> j;
    while(j != i) {
        if (j < i)
           cout << "Za malo\n" << endl;
        else
            cout << "Za duzo\n" << endl;
    cout << "Zgadnij liczbe! ";
        cin >> j;
        proba++;
    }

    cout << "Tak to jest ta liczba\n";
    cout << "Ilosc prob: " << proba;
    return 0;
}
