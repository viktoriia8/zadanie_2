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
class Kolo;

class Gracz {
    string imie;
    int kasa;
    int portfel;
public:
    int nr;
    Gracz(string name);//, int k, int p);
  // friend string Kolo::getRezultat();
    void setKasa(int *kolejka,Kolo kolo);
    void zmienPortfel(int portfel,int zmiana);
    //void textPlayers(int *kolejka);
    string getImie();
    int getPortfel();
    friend class Kolo;
};