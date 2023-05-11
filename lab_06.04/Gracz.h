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
using namespace std;
class Kolo;

class Gracz {
    string imie;
    int kasa;
    int portfel;
public:
    //int nr;
    Gracz(string name);//, int k, int p);
  // friend string Kolo::getRezultat();
    void setKasa(int *kolejka,Kolo kolo);
    void zmienPortfel(int zmiana);
    //void textPlayers(int *kolejka);
    string getImie();
    int getPortfel();
    friend class Kolo;
};