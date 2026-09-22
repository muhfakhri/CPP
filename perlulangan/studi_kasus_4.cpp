#include <iostream>
#include <string>

using namespace std;

int main() {
    // Studi Kasus 4: Statistik Nilai Ujian
    int jumlah_mahasiswa;
    double nilai, total_nilai = 0;
    double rata_rata = 0;
    int lulus = 0, tidak_lulus = 0;
    string kelas;

    cout << "== Statistik nilai ujian mahasiswa ==\n";
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> jumlah_mahasiswa;

  
    for(int i = 1; i <= jumlah_mahasiswa; i++) {
        cout << "\n== Input nilai ==\n";
        cout << "Mahasiswa ke-" << i << endl;
        cout << "Nilai : ";
        cin >> nilai;


        total_nilai += nilai;
        
       
        if(nilai >= 60) {
            lulus++;
        } else {
            tidak_lulus++;
        }
    }

    if(jumlah_mahasiswa > 0) {
   
        rata_rata = total_nilai / jumlah_mahasiswa;
        if (rata_rata >= 80) {
            kelas = "Kelas Sangat Baik";
        } else if (rata_rata >= 60) {
            kelas = "Kelas Cukup";
        } else {
            kelas = "Kelas Kurang";
        }


        cout << "\n\n ===HASIL STATISTIK UJIAN KELAS===     \n";
        cout << "Jumlah Mahasiswa Lulus      : " << lulus << endl;
        cout << "Jumlah Mahasiswa Tidak Lulus: " << tidak_lulus << endl;
        cout << "Rata-rata Nilai Kelas       : " << rata_rata << endl;
        cout << "Kategori Performa Kelas     : " << kelas << endl;
    } else {
        cout << "\nJumlah mahasiswa harus lebih dari 0!" << endl;
    }

    return 0;
}