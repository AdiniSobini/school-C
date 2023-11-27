#include <iostream>

using namespace std;


int main() {
	int figura, a, b, p1, p2, pole, obwod, warunek_zakonczenia;
	
	
	
	do {
		cout<<"Czesc pomoge ci obliczyc pole deltoidu"<<endl<<"Wybierz figure"<<endl<<"1. Pole deltoidu	/	2. Obwod";
		cin>>figura;
	
	
		;switch(figura){
	

	
		case 1:
			cout<<"liczymy pole figury";
			cout<<"Podaj przekatna P1 ";
			cin>>p1;
			cout<<"Podaj przekatna P2 ";
			cin>>p2;
			cout<<"Pole deltoidu wynosi="<<(p1*p2)/2<<endl;
			break;
		case 2:
			cout<<"liczymy obwod";
			cout<<"Podaj bok a";
			cin>>a;
			cout<<"Podaj bok b";
			cin>>b;
			cout<<"Obwód wynosi="<<2*a+2*b<<endl;
			break;
		default:
			cout<<"B³¹d"<<endl;
		}
		
		cout<<"Czy chcesz kontynuowaæ program? 1. Tak / 2. Nie";
		cin>>warunek_zakonczenia;
		}
		while(warunek_zakonczenia);
		
		cout<<"Adrian_Sobczak";
		return 0;
		
		
		
		
	}
		
