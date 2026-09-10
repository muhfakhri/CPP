#include <iostream>
#include <string>

using namespace std;

int main() {

    string nama,alamat;
    int tahun_lahir,tahun_sekarang,umur;

    cout << "=== Program hitung umur ===\n";
    cout << "Nama           : ";
    getline(cin, nama);
    cout << "Alamat         : ";
    cin >> alamat;
    cout << "Tahun lahir    : ";
    cin >> tahun_lahir;
    cout << "Tahun sekarang : ";
    cin >> tahun_sekarang;

    umur = tahun_sekarang - tahun_lahir;

    cout << "Umur           : " << umur;
    


    return 0;
}