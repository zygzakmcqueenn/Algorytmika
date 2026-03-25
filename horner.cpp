#include <iostream>
using namespace std;

int horner(int wsp[], int stopien, int x) {
    int wynik = wsp[stopien]; 
    for (int i = stopien - 1; i >= 0; i--) {
        wynik = wynik * x + wsp[i];
    }
    
    return wynik;
}

int main(){
	int stopien;
	int x;
	cout << "Podaj stopien wielomianu: ";
	cin >> stopien;
	
	int * wspolczynnik = new int[stopien + 1];
	
	for (int i = stopien; i >= 0; i--){
		cout << "Podaj wspolczynnik stojacy przy potedze " << i << ": ";
		cin >> wspolczynnik[i];
	}
	
	cout << "Podaj argument: ";
	cin >> x;
	
	int wynik = horner(wspolczynnik, stopien, x);
	
	cout << "W (" << x << ") = " << wynik << endl;
	
	delete[] wspolczynnik;
	
	return 0;
	
}
