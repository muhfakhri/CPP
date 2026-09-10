#include <iostream>

int main() {

    int panjang,lebar;
   
    std::cout << "=== Program menghitung keliling persegi panjang === \n";
    std::cout << "Masukan panjang : ";
    std::cin >> panjang;
    std::cout << "Masukan lebar : ";
    std::cin >> lebar;

    int keliling = 2 * (panjang + lebar);

    std::cout << "Keliling dari panjang " << panjang << " dan lebar " << lebar << " adalah " << keliling; 
    



    return 0;
}