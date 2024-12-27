#include <iostream>

using namespace std;

int silnia(int n){
    if(n <= 1){
        return 1;
    }
    return n*silnia(n-1);

bool czyPierwsza(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
	    return false;
	}
    }
    return true;
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
	cout << "2. Sprawdz czy pierwsza" << endl;
	cin >> wyjscie;
	if(wyjscie == 2){
	   if(czyPierwsza(b)){
	       cout << "Tak, liczba " << b << " jest pierwsza" << endl;
	   } else{
	       cout << "Nie, liczba " << b << " nie jest pierwsza" << endl;
	   }
	}
    } while(wyjscie != 0);
    return 0;
}
