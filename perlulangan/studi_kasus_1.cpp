#include <iostream>
#include <string>

using namespace std;

int main() {
    
   // Program sistem antrian pelayanan bank by NurFakhri

    int jumlah_nasabah, jenis_layanan, i , total_setor, total_tarik, total_transfer;
    double presentase;

    total_setor = 0;
    total_tarik = 0;
    total_transfer = 0;

    cout << "Masukkan jumlah nasabah : ";
    cin >> jumlah_nasabah;

    for (i = 1; i <= jumlah_nasabah; i++) {
        cout << "\nNasabah ke-" << i << endl;
        cout << "Pilih jenis layanan:\n";
        cout << "1. Setor\n";
        cout << "2. Tarik\n";
        cout << "3. Transfer\n";
        cout << "Masukkan nomor : ";
        cin >> jenis_layanan;

        switch (jenis_layanan) {
            case 1:
                total_setor++;
                break;
            case 2:
                total_tarik++;
                break;
            case 3:
                total_transfer++;
                break;
            default:
                cout << "\n\nWARNING:Pilihan tidak valid.\n";
                i++; 
        }

        cout << "\n\n=== TRANSAKSI HARI INI ===\n";
        cout << "Total Setor        : " << total_setor << endl;
        cout << "Total Tarik        : " << total_tarik << endl;
        cout << "Total Transfer     : " << total_transfer << endl;
        
        if (jumlah_nasabah > 0) {
            presentase = (total_transfer / jumlah_nasabah) * 100;
            
            if (presentase > 50) {
                cout << "Kinerja teller difokuskan pada transfer";
            
            } else {
                cout << "Pelayanan Seimbang";
            }
        }
    } 
   



    return 0;
}