using namespace std;
#include "Gracz.h"
#include "Kolo.h"
//#include "Kolor.h"

Gracz::Gracz(string name){// int k=0, int p=0) {
	imie = name;
	kasa = 0;
	portfel = 0;
	
	//kasa = k;
	//portfel = p;
} 
void Gracz::setKasa(int* kolejka, Kolo kolo) {
	string rezultat_temp =kolo.Kolo::getRezultat();
	if (rezultat_temp == "Bankrut") {
		zmienPortfel(0, 0);
	}
	else if (rezultat_temp == "Strata kolejki")
		*kolejka = (*kolejka + 1) % 3;
	
}

void Gracz::zmienPortfel(int portfel,int zmiana) {
	this->portfel = portfel + zmiana;
}
string Gracz::getImie() {
	return imie;
};
int Gracz::getPortfel() {
	return portfel;
};
/*void Gracz::textPlayers(int* kolejka)
{
	int i;
	std::cout << "\n";
	for (i = 0; i < 3; i++) {
		if (i == *kolejka) {
			cout << "\033[1;34m";
		}
		cout << gracze[i].imie << "\t" << gracze[i].kasa << "\n";
		cout << "\033[0m";

	}
	cout << "\n";
}*/