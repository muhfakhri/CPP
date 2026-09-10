#include <iostream>
#include <string>

using namespace std;

int main() {

    double alas,tinggi;

    cout << "=== Program menghitung luas segitiga ===\n";
    cout << "Alas   : ";
    cin >> alas;
    cout << "Tinggi : ";
    cin >> tinggi;

    double luas = 0.5 * alas * tinggi;

    cout << "=== Hasil ===\n";
    cout << "Luas segitiga : " << luas;



    return 0;
}