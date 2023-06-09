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
	friend ostream& operator<<(ostream& os, const Haslo& haslo) {
		os << haslo.haslo;
		return os;
	}
	bool operator==(const Haslo& other) const {
		return haslo == other.haslo;
	}
};