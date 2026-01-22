#include <iostream>
using namespace std;
void przelicznik(int liczbaa){
        int tab[15];
        int i = 0;
        while(liczbaa != 0){
                tab[i++] = liczbaa % 2;

                liczbaa = liczbaa / 2; }
        for(int j = i - 1; j >= 0; j--){
                cout << tab[j];
        }
}
int main(){
        int liczba;
        cout << "Podaj liczbe do przeliczeniq na dziesietna: ";
        cin >> liczba;
        cout << liczba << "po zamianie na postac binarbna: ";
        przelicznik(liczba);
       return 0;
}
