#include <iostream>
#include <string>

using namespace std;

int main() {
        // Studi Kasus 5s
        int harga_tiket = 50000,total_pendapatan,tiket = 0,i;
        int total_tiket = 0, total_harga;
        string target;
        do { 
        
        cout << "\n===Pesan Tiket Bioskop==\n";
        cout << "Harga 1 tiket Rp50.000 \n";
        cout << "Diskon 20persen jika beli lebih atau 5 tiket\n";
        cout << "Ketik 0 jika sudah\n";
        cout << "Tiket yang di pesan : ";
        cin >> tiket;


        total_tiket += tiket;

        } while (tiket != 0); 

    total_harga = total_tiket * harga_tiket;
        total_pendapatan = total_harga * 0.2;

    if (total_tiket >= 5) {
            if (total_pendapatan >= 2000000) {
                target = "Tercapai";
            } else {
                target = "Belum Tercapai";
            }
    }

    cout << "\n\n==PENDAPATAN BIOSKOP==\n";
    cout << "Tiket terjual                          : " << total_tiket << endl;
    cout << "Harga                                  : Rp" << total_harga  <<  endl;
    cout << "Total pendapatan (setelah diskon)      : Rp" << total_pendapatan << endl;
    cout << "Target                                 : " << target << endl;

        return 0;
}