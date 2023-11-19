#include<iostream>//do³¹cz biblioteke strumieniow¹
#include<cstdlib>//do³¹cz biblioteke strumieniow¹
using namespace std;//uruchom przestrzen nazw
main()//rozpocznij dzialanie funkcji glownej 
{//poczatek bloku 
powrot://etykieta-miejsce powrotu 
	int odp,x,y,suma;//instrukcja deklaracji zmiennych, typ ca³kowity
	cout<<"witaj w moim programie, podaj mi dwie liczby"<<endl;//komunikat
	cout<<" a ja ci powiem ktora jest wiekasza i oblicze ich sume"<<endl;
	cin>>x;//wczytaj liczbe 
	cin>>y;//wczytaj liczbe 
	if(x==y)//sprawdzenie wayunku czy sa równe
	{cout<<"liczy sa rowne"<<endl;//komunikat
	}
	else if (x>y)//sprawdzenie warunku 
	{cout<<"liczba "<<x<<" jest wieksza od"<<y<<endl;
	}//komunikat 
	else//w przeciwnym razie
	{cout<<"liczba "<<y<<" wieksze od "<<x<<endl;//komunikat o sumie 
	}
	suma=x+y;//operacja oblicz sumê
	cout<<"suma tych liczb wynosi "<<suma<<endl;//komunikat o sumie 
	cout<<"czy powtarzamy program? 1-tak 0-nie"<<endl;//komunikat pytajacy 
	cin>>odp;//wybor dzialajacy urzytkowika 
	if (odp==1)//instrrukcja if, sprawdzanie ruchu
	{goto powrot;}//idz na poczatek programu do linijki 6
		else
	{cout<<"dzieki za urzycie mojego programu, KW, dzis"<<endl;
	}//komunikat koncowy 
	system("pause");//zatrzymanie programu
	return 0;//wyslij sygnal do SO ze zakonczyles dzialanie
}//koniec bloku 
