#include <iostream>
#include <iomanip>

int main () {
    
    
    const double pi = 3.14159;
    double jari_jari;

    std::cout << "=== Program menghitung luas dan keliling lingkaran === \n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Masukan jari-jari : ";
    std::cin >> jari_jari;
    
    double luas = pi * (jari_jari * jari_jari);
    double keliling = 2 * pi * jari_jari;

    std::cout << "\n== Hasil ==\n\n";
    std::cout << "Luas : " << luas << std::endl;
    std::cout << "Keliling : " << keliling;


    return 0;

}