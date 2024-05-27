#include <iostream>
int main(){



do{

setlocal(LC_CTYPE "Polish");

int odp;
		cout << "Witaj w moim programie, który porówna dwie liczby" << endl;
		cout << "Podaj pierwszš liczbę do porównania" << endl;
		cin >> x1 
		cout << "Podaj drugš liczbę do porównania" << endl;
		cin >> x2
		
		
		if (x1 == x2){
	
			cout << "Liczby sš sobie równe" << endl;
		else if (x1 > x2)
			cout << "Większa jest liczba:" << x1 << endl;
		else
			cout << "Większa jest liczba:" << x2 << endl;
		}
		
		cout << "Czy chcesz powtórzyć proces? 1-TAK 2-NIE" << endl;
		cin >> odp
		
		while (odp== 1);
		
	cout << "Dzięki za użycie mojego programu, Adrian Sobczak" << endl;
		return0;

	
}






}



