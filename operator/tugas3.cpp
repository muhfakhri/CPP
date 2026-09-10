#include <iostream>
#include <string>

using namespace std;

int main() {
    double berat_badan, tinggi_badan;

    cout << "=== Program menghitung BMI ===\n";
    cout << "Berat badan (kg)   : ";
    cin >> berat_badan;
    cout << "Tinggi badan (cm)  : ";
    cin >> tinggi_badan;

  
    double tinggi_meter = tinggi_badan / 100;
    double nilai_bmi = berat_badan / (tinggi_meter * tinggi_meter);

    string kategori;
    if (nilai_bmi < 17.0) {
        kategori = "Sangat Kurus";
    } else if (nilai_bmi <= 18.4) {
        kategori = "Kurus";
    } else if (nilai_bmi <= 25.0) {
        kategori = "Normal";
    } else if (nilai_bmi <= 27.0) {
        kategori = "Gemuk";
    } else {
        kategori = "Obesitas";
    }

   
    cout << "\n=== Hasil perhitungan ===\n";
    cout << "Nilai BMI Anda    : " << nilai_bmi << "\n";
    cout << "Kategori          : " << kategori << "\n";

    return 0;
}