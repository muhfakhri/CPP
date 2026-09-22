#include <iostream>
using namespace std;

int main() {
    long long total = 0;
    int hari = 0;
    long long target = 2000000;
    long long tabunganHarian = 10000;
    long long tabunganHariKe7 = 50000;

    
    do {
        hari++;

        if (hari % 7 == 0) {
            total += tabunganHariKe7;
        } else {
            total += tabunganHarian;
        }

    } while (total < target);

    cout << "Jumlah hari yang dibutuhkan: " << hari << " hari" << endl;
    cout << "Total tabungan akhir: Rp" << total << endl;

    if (total == target) {
        cout << "Target tercapai TEPAT pada hari ke-" << hari << endl;
    } else {
        cout << "Target TERLEWATI pada hari ke-" << hari << endl;
        cout << "Kelebihan: Rp" << (total - target) << endl;
    }

    return 0;
}