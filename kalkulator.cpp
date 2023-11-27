#include <iostream>

using namespace std;


int main() {
	int dodawanie, kalkulator, a, b, odejmowanie, mnozenie, dzielenie, warunek_zakonczenia;
	
	
	
	do {
		cout<<"Czesc jestem kalkulatorem"<<endl<<"Co chcesz zrobic???"<<endl<<"1. dodawanie	/ 2. odejmowanie / 3. mnozenie / 4. dzielenie" ;
		cin>>kalkulator;
	
	
		;switch(kalkulator){
	

	
		case 1:
			cout<<"Dodawanie";
			cout<<"Podaj pierwsza liczbe ";
			cin>>a;
			cout<<"Podaj druga liczbe ";
			cin>>b;
			cout<<"Wynik ="<<a+b<<endl;
			break;
		case 2:
			cout<<"Odejmowanie";
			cout<<"Podaj pierwsza liczbe ";
			cin>>a;
			cout<<"Podaj druga liczbe ";
			cin>>b;
			cout<<"Wynik ="<<a-b<<endl;
			break;
        case 3:
        cout<<"Mnozenie";
			cout<<"Podaj pierwsza liczbe ";
			cin>>a;
			cout<<"Podaj druga liczbe ";
			cin>>b;
			cout<<"Wynik ="<<a*b<<endl;
			break;
        case 4:
        cout<<"Dzielenie";
			cout<<"Podaj pierwsza liczbe ";
			cin>>a;
			cout<<"Podaj druga liczbe ";
			cin>>b;
			cout<<"Wynik ="<<a/b<<endl;
			break;
		default:
			cout<<"Error"<<endl;
		}
		
		cout<<"Czy chcesz kontynuowaæ program? 1. Tak / 2. Nie";
		cin>>warunek_zakonczenia;
		}
		while(warunek_zakonczenia);
		
		cout<<"AdiniSobini";
		return 0;
		
		}
		
