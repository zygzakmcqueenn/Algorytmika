#include<iostream>
using namespace std;
int szybkibill(int baza, int wykladnik)
{
	int wynik = 1;
	
	while(wykladnik>0)
	{
		if (wykladnik%2 == 1) 
			wynik *= baza;
			
		baza*= baza;
		wykladnik/=2; 
	}
	return wynik;
}

int main()
{
	int wykladnik;
	int baza;
	
	cout<<"Podaj baze: ";
	cin>>baza;
	cout<<"Podaj potege: ";
	cin>>wykladnik;
	cout<<"wynik dzialania wynosi: "<<szybkibill(baza, wykladnik);

	return 0;
}