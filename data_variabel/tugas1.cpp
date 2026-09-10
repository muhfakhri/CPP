#include <iostream>


int main() {

    double a,b;
    a = 40;
    b = 20;

    double tambah = a + b;
    double kurang = a - b;

    std::cout << "=== Hasil penjumlahan dan pengurangan 2 bilangan ===\n";
    std::cout << "Hasil " << a << " + " << b << " = " << tambah << "\n";
    std::cout << "Hasil " << a << " - " << b << " = " << kurang;


    return 0;
}