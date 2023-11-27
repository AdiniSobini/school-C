#include<iostream>
#include<cstdlib>
using namespace std;
main() 
{
powrot:
	int odp,x,y,suma;
	cout<<"witaj w moim programie, podaj mi dwie liczby"<<endl;
	cout<<" a ja ci powiem ktora jest wiekasza i oblicze ich sume"<<endl;
	cin>>x;
	cin>>y; 
	if(x==y)
	{cout<<"liczy sa rowne"<<endl;
	}
	else if (x>y)
	{cout<<"liczba "<<x<<" jest wieksza od"<<y<<endl;
	}
	else
	{cout<<"liczba "<<y<<" wieksze od "<<x<<endl;
	}
	suma=x+y;
	cout<<"suma tych liczb wynosi "<<suma<<endl;
	cout<<"czy powtarzamy program? 1-tak 0-nie"<<endl; 
	cin>>odp;
	if (odp==1)
	{goto powrot;}
		else
	{cout<<"dzieki za urzycie mojego programu, KW, dzis"<<endl;
	}
	system("pause");
	return 0;
}
