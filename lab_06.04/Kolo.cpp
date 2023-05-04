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
    else
        rezultat = Kolo_;
};


int Kolo::getKolo() {
	return Kolo_;
};
string Kolo::getRezultat() {
    return rezultat;
};

void Kolo::WyswietlKolo(Kolo* kolo) {
    cout << "\033[1;31m" << getRezultat() << "\033[0m" << endl;
};

    // Strata kolejki i bankrut
    /*if ((kolo->Kolo_ == 0) || (kolo->Kolo_ == -1))
    {
        if (kolo->Kolo_ == -1) // bankrut
            gracze[kolejka].kasa = 0;

        kolejka = (kolejka + 1) % 3;
        suma = 1;
        cout << endl << "=================================================" << endl;

        // TODO
        // sleep for
        // kupowanie samoglosek

        continue;

    }




};*/