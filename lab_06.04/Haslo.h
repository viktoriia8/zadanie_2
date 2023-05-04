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
	int getN();
	string getHaslo();
	Haslo();
	void WyswietlHasla();
	//string getHaslo();
	void WyswietlMaske();
	int jestSamogloska(char c);
	char* getcharHaslo();
	int* getMaska();
};