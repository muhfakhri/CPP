#include <iostream>
#include <string>

using namespace std;

int main () {
    string jalur,sertifikat;
    int nilai_utbk,nilai_toefl;

    cout << "===Sistem Penerimaan mahasiswa baru===\n";
    cout << "Masukan Nilai UTBK : ";
    cin >> nilai_utbk;
    cout << "Memiliki sertifikat? (yes/no) : ";
    cin >> sertifikat;

         cout << "Masukan Nilai TOEFL iBT : ";
         cin >> nilai_toefl;
         if (sertifikat == "yes" && nilai_utbk < 500) {
            jalur = "Khusus";
            cout << "Jalur  : " << jalur;
            return 0;

         } else if (sertifikat == "no"); {
            if (nilai_utbk >= 650) {
                jalur = "Prestasi";
            } else if (nilai_utbk >= 600 && nilai_toefl >= 80 ) {
                jalur = "Internasional";
            } else if (nilai_utbk >= 500 && nilai_utbk <= 649 ) {
                jalur = "Reguler";
            } else {
                jalur = "Tidak diterima";
            }
             cout << "Jalur : " << jalur;
         }

        
    return 0;
}