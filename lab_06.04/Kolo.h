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
class Gracz;
class Kolo {
int Kolo_;
string rezultat;
public:
	int getKolo();
	string getRezultat();
	Kolo();
	void WyswietlKolo(Kolo *kolo);
	//friend class Gracz;
};