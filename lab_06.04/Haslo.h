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

class Haslo {
	string haslo;
	vector<string> hasla;
	int n;
	int maska[100];
public:
	//int maska[100];
	int zgadl;
	void ZmienMaske(char znak);
	int getN();
	string getHaslo();
	Haslo();
	void WyswietlHasla();
	void WyswietlMaske();
	int jestSamogloska(char c);
	
	int* getMaska();
	/*friend ostream& operator<<(ostream& os, const Haslo haslo) {
	os << "\033[47m" << "\033[31m";
		for (int i = 0; i < haslo.n; i++)
		{
			if (haslo.maska[i] == 1)
				os << ".";
			else
				os << haslo.haslo[i];
		}
												//haslo.WyswietlMaske()
		os << "\033[0m";
		os << endl;
	return os;
    };*/
};