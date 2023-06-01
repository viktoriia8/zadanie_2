using namespace std;
#include "Gracz.h"
#include "Kolo.h"
//#include "Kolor.h"

Gracz::Gracz(string name){// int k=0, int p=0) {
	imie = name;
	kasa = 0;
	portfel = 0;//kasa z wygranych rund
	
	//kasa = k;
	//portfel = p;
} 
void Gracz::setKasa(int* kolejka, Kolo kolo) {
	string rezultat_temp =kolo.Kolo::getRezultat();
	if (rezultat_temp == "Bankrut") {
		zmienPortfel( 0);
	}
	else if (rezultat_temp == "Strata kolejki")
		*kolejka = (*kolejka + 1) % 3;
}

void Gracz::zmienPortfel(int zmiana) {
	this->portfel += zmiana;
}
string Gracz::getImie() {
	return imie;
};
int Gracz::getPortfel() {
	return portfel;
};

//zmienPortfel???
//Gracz operator+(Gracz gracz, int r) {
//	return Gracz(gracz.portfel+=r);
//};
