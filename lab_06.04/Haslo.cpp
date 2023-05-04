using namespace std;
#include "Haslo.h"

Haslo::Haslo() {
    //vector<string> hasla;
    ifstream strum;
    strum.open("dane.txt");

    while (!strum.eof())
    {
        string s;
        //strum >> s;
        getline(strum, s);
        //cout << s << endl;
        hasla.push_back(s);

    }
    strum.close();
    
    assert(hasla.size() > 0);
    int j = rand() % hasla.size(); // losujemy j-te haslo z przedzialu 0 ... size - 1
    //cout << hasla[j];

    haslo = hasla[j];
    n = haslo.size();
    
    for (int i = 0; i < n; i++)
    {
        if (haslo[i] == ' ')
            maska[i] = 0;
        else
            maska[i] = 1;
    }
};

void Haslo::WyswietlHasla() {
    // for (i = 0; i < hasla.size(); i++)
     //    cout << hasla[i] << endl;
    for (string item : hasla)
        cout << item << endl;
    cout << endl << endl;
};

void Haslo::WyswietlMaske() {  
        // cout << "\033[2J";

        cout << "\033[47m" << "\033[31m";
        for (int i = 0; i < n; i++)
        {

            if (maska[i] == 1)
                cout << ".";
            else
                cout << haslo[i];
        }

        cout << "\033[0m";
        cout << endl;

};
int Haslo::jestSamogloska(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
        return 1;
    else
        return 0;

};
int Haslo::getN() {
    return n;
}


string Haslo::getHaslo() {

   return haslo;
};
char* Haslo::getcharHaslo(){
    string tab = haslo;
    char* tablica = new char[tab.size() + 1];
    strcpy(tablica, tab.c_str());
    return tablica;
}
int* Haslo::getMaska() {
    return maska;
};