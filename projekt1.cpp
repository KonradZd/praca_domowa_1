#include <iostream>

using namespace std;

int silnia(int n){
    if(n <= 1){
        return 1;
    }
    return n*silnia(n-1);
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
	cout << endl;
	cout << "MENU" << endl;
	cout << "Podaj numer czynnosci, ktora chcesz wkonac" << endl;
	cout << "0. Wyjscie" << endl;
	cout << "1. Silnia" << endl; 
	cin >> wyjscie;
	if(wyjscie == 1){
	   cout << "Silnia z " << a << ": " << silnia(a) << endl;
	}
    } while(wyjscie != 0);
    return 0;
}
