#include <iostream>
#include <string>

using namespace std;

int main() {

   string nama_barang;
   double harga_satuan,total_harga,total_akhir,ppn;
   int jumlah_barang;


   cout << "=== KASIR SEDERHANA ===\n";
   cout << "Nama barang : ";
   getline(cin, nama_barang);
   cout << "Harga : Rp";
   cin >> harga_satuan;
   cout << "Jumlah : ";
   cin >> jumlah_barang;

   total_harga = harga_satuan * jumlah_barang;
   ppn = total_harga * 0.11;
   total_akhir = total_harga + ppn;

   cout << "=== RINCIAN ===\n";
   cout << "Nama barang     : " << nama_barang << endl;
   cout << "Jumlah          : " << jumlah_barang << endl;
   cout << "Total + PPN 11% : Rp" << total_akhir;

    return 0;
}