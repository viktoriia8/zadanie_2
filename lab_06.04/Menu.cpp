using namespace std;
#include "Menu.h"

int Menu::WyswieltMenu() {
    cout << "1. zgaduj haslo" << endl;
    cout << "2. krecenie kolem" << endl;
    char w = WczytajWybor();
    if (w == '1') 
        return 1;
           else 
              return 2;
}

char Menu:: WczytajWybor()
{
    char wybor;
    wybor = WczytajZnak();

    while (wybor != '1' && wybor != '2')
    {
        cout << endl << "Wybierz [1-2]: ";
        cin >> wybor;
    }

    return wybor;

}
