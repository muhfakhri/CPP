#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int jenis_kendaraan,durasi,jam,tarif;
    double cap_harian,total_biaya;

    cout << "=== Sistem parkir digital ===\n\n";

    cout << "=Jenis Kendaraan= \n";
    cout << "1. Motor\n";
    cout << "2. Mobil\n";
    cout << "Masukan 1/2 : ";
    cin >> jenis_kendaraan;

    cout << "Durasi parkir (menit) : ";
    cin >> durasi;

    jam = ceil(durasi / 60.0);

    if (jenis_kendaraan == 1) {
         tarif = 2000; 
         cap_harian = 30000;
    } else if (jenis_kendaraan == 2) {
         tarif = 5000;
         cap_harian = 60000;
    } else {
        cout << "Perintah tidak di ketahui";
        return 0;
    }

    if (jam > 5) {
        total_biaya = 5 * tarif + (jam - 5) * tarif * 0.5;
    } else {
        total_biaya = jam * tarif;
    }

    if (jam > 10 && total_biaya > cap_harian) {
        total_biaya = cap_harian;
    }

    cout << "=============\n";
    cout << "Jumlah Jam : " << jam << "jam" << endl;
    cout << "Total biaya : Rp" << total_biaya << endl;

    return 0;

}