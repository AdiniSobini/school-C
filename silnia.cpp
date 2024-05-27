
#include <cstdlib>
#include <iostream>
using namespace std;

int main() 
{
    int i = 0, wybor;
    setlocale(LC_CTYPE, "Polish");
    do {
        long long silnia = 1;
        unsigned int n; 
        
        cout << "hej. posyłam gwiazdki na szczeście" << endl;
        i = 0;
        while (i <= 8) {
            cout << "*";
            i++;
        }
        
        cout << "\nTeraz, obliczmy silnię" << endl;
        cout << "Podaj liczbę n: ";
        cin >> n;

        i = n;
        while (i > 1) {
            silnia *= i;
            i--;
        }

        cout << n << "! = " << silnia << endl;
        
        cout << "Czy chcesz powtórzyć obliczenie? (1-tak / 0-nie): ";
        cin >> wybor;
        
    } while (wybor != 0);
    
    cout << "Dzięki, Autor Adrian Sobczak 3C gr.2" << endl;
    
    return 0;
}
