using namespace std;
#include "Kolo.h"

Kolo::Kolo() {
	int Kolo_ar[] = { -1, 0, 100, 200, 100, 200, 100, 200, 500, 500, 1000, 1000, 1500, 2000, 3000, 5000 };

	int i = rand() % 15;
	Kolo_=Kolo_ar[i];
    rezultat = "";
    if (Kolo_ == 0)
        rezultat = "Strata kolejki";
    else if (Kolo_ == -1)
        rezultat = "Bankrut";
    else {
        
        rezultat =to_string(Kolo_);
    }
};


int Kolo::getKolo() {
	return Kolo_;
};
string Kolo::getRezultat() {
    return rezultat;
};

void Kolo::WyswietlKolo() {
    cout << "\033[1;34m" << getRezultat() << "\033[0m" << endl;
};

    