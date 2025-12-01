#include <iostream>
using namespace std;

void rozklad(int liczbaa){
        int ck = 2;
        while(liczbaa > 1){
                while(liczbaa % ck == 0){
                        cout << k << " ";
                        liczbaa /= ck;
                }
                ck++;
        }
}

int main(){
        int liczba;
        cout << "Podaj liczbe: ";
        cin >> liczba;

        cout << "Czynniki pierwsze liczby " << m << ": ";
        rozklad(liczba);
        cout << endl;

        return 0;
}