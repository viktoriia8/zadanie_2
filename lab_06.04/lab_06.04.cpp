// Kolory.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>  
#include <fstream>
#include <vector>
#include <cstring>
#include <cassert>
#include <locale.h>
#include "Gracz.h"
#include "Haslo.h"
#include "Menu.h"
#include "Kolo.h"


using namespace std;

char WczytajZnak()
{
    string letter;
    cin >> letter;

    while (letter.length() != 1)
    {
        std::cout << endl << "Type a single letter and press <enter>: ";
        cin >> letter;
    }

    for (auto& c : letter)  // & zapamietuje modyfikacje w petli & - referencja
        c = toupper(c);

    return letter[0];

};
using namespace std;

void PrintPlayers(vector<Gracz>Gracze, int& kolejka) {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        if (i == kolejka) {
            cout << "\033[1;34m";
        }
        cout << Gracze[i].getImie() << "\t" << Gracze[i].getPortfel() << "\n";
        cout << "\033[0m";
    }
    cout << "\n";
};






int main(){
    vector<Gracz>Gracze;
    
    Gracz gracz1 ("Bryanusz ");
    Gracz gracz2 ("Jessica ");
    Gracz gracz3 ("Nepomucen ");
    Gracze.push_back(gracz1);
    Gracze.push_back(gracz2);
    Gracze.push_back(gracz3);
    string proba;
    
    Haslo haslo;
    int kolejka=0;
    int suma=1;

    haslo.WyswietlHasla();

    cout << endl << endl;

    do {
        haslo.WyswietlMaske();
        cout << "\033[0m";
        cout << endl;

        int sa_spolgloski = 0;
        int kwota = 0;
        string haslo_ = haslo.getHaslo();
        int* maskaTab = haslo.getMaska();
        for (int i = 0; i < haslo.getN(); i++)
            if (!haslo.jestSamogloska(haslo_[i]) && (maskaTab[i]))
            {
                sa_spolgloski = 1;
                break;
            }
        if (sa_spolgloski)
            cout << " -- Spolgloski sa --" << endl;
        PrintPlayers(Gracze, kolejka);
        suma = 1;
        Menu menu;
        if (menu.WyswieltMenu() == 1) {
            cout << "Podaj haslo\n";
            getline(cin >> ws, proba);  // wczytanie z klawiatury string z uwzgl. whitespa
            for (auto& c : proba)  // & zapamietuje modyfikacje w petli & - referencja
                c = toupper(c);
            if (haslo.getHaslo() == proba) {
                cout << endl << " !!!!!!!!!! =======   WYGRANA ========== !!!!!!!!!!!!!" << endl;
                Kolo kolo;
                int portfel = Gracze[kolejka].getPortfel();
                int rezultat_w = 99999;
                Gracze[kolejka].zmienPortfel(portfel,rezultat_w);
                break;
            }
            else
            {
                kolejka = (kolejka + 1) % 3;
                suma = 1;
                cout << endl << " !!!!!!!!!! =======   ZLE ========== !!!!!!!!!!!!!" << endl;
                cout << endl << "=================================================" << endl;
                continue;


            }
        }else {//wybor nr 2
            Kolo kolo;
            kolo.WyswietlKolo();
            cout << Gracze[kolejka].getImie() << ": Podaj litere\n";
            char znak=WczytajZnak();
            if (haslo.jestSamogloska(znak)) 
                cout << "samogloska\n";
              else cout<<"spolgloska\n";
            haslo.ZmienMaske(znak);

            if (haslo.zgadl)
            {
                cout << "OK";
                int portfel_ = Gracze[kolejka].getPortfel();
                Gracze[kolejka].zmienPortfel(portfel_,stoi(kolo.getRezultat())*haslo.zgadl);

                cout << endl << Gracze[kolejka].getImie() << "\033[1;32m " << Gracze[kolejka].getPortfel() << "\033[0m\n";


            }
            else {
                cout << "Zle!";
                // strata kolejki
                kolejka = (kolejka + 1) % 3;
                cout << endl << "=================================================" << endl;
                suma = 1;
                continue;
            }
        };

        suma = 0;

        for (int i = 0; i < haslo.getN(); i++)
        {
            suma += haslo.getMaska()[i];
        }
      
    
    } while (suma);
 
    cout << "BRAWO!";
    exit(0);

    PrintPlayers(Gracze,kolejka);
    Beep(523, 500);
};