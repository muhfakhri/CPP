#include <iostream>


int main() {

    int detik,jam,menit,detik2;

    std::cout << "=== Program konversi detik ke format jam ===\n";
    std::cout << "Masukan detik : ";
    std::cin >> detik;

    jam = detik / 3600;
    menit = (detik % 3600) / 60;
    detik2 = (detik % 3600) % 60;

    std::cout << "== Hasil Konversi ==\n";
    std::cout << jam << ":" << menit << ":" << detik2 << "  (" << jam << " jam, " << menit << " menit, " << detik2 << " detik).";


    return 0;
}