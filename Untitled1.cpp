#include <iostream>
using namespace std;
int szukamszukam(int tablicaa[], int szukamy) {
   int ls = 0;
   int ps = 14;
   while (ls <= ps) {
       int sr = (ls + ps) / 2;
       if (tablicaa[sr] == szukamy) {
           return sr;
       }
       else if (tablicaa[sr] > szukamy) {
           ps = sr - 1;
       }
       else {
           ls = sr + 1; 
       }
   }
   return -1;
}
int main() {
   int tablicaa[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
   int szukamy;
   cout << "czego szukasz przyjacielu: ";
   cin >> szukamy;
   int wynik = szukamszukam(tablicaa, szukamy);
   if (wynik != -1) {
       cout << "Liczba " << szukamy << " siedzi na indeksie " << wynik << endl;
   } else {
       cout << szukamy << "? Nikogo takiego nie znam." << endl;
   }
   return 0;
}