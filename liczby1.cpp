#include <iostream>
#include <cmath>

using namespace std;

void sprawdzanie(int n) {
    if (n < 2) {  
        cout << n << " nie jest liczba pierwsza." << endl;
        return;
    }
	int limit = sqrt(n); 
    for (int d = 2; d <= limit; d++) {
        if (n % d == 0) { 
            cout << n << " nie jest liczba pierwsza." << endl;
            return;
        }
    }
	cout << n << " jest liczba pierwsza." << endl;
}
int main() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;

    sprawdzanie(n);

    return 0;
}
