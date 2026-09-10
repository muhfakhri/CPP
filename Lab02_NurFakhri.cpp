#include <iostream>

int main() {
    std::string namaLengkap;
    std::string nim;
    std::string pengalaman;
    std::string topikAlgoritma;
    std::string targetBelajar;

    std::cout << "Nama Lengkap: ";
    std::getline(std::cin, namaLengkap);
    std::cout << "NIM : ";
    std::getline(std::cin, nim);
    std::cout << "Pengalaman pemograman sebelumnya : ";
    std::getline(std::cin, pengalaman);
    std::cout << "Topik algoritma yang ingin dikuasai : ";
    std::getline(std::cin, topikAlgoritma);
    std::cout << "Target belajar selama satu semester : ";
    std::getline(std::cin, targetBelajar);

    std::cout << "\n=== Rencana Belajar Algoritma === \n";
    std::cout << namaLengkap << "\n";
    std::cout << nim << "\n";
    std::cout << pengalaman << "\n";
    std::cout << topikAlgoritma << "\n";
    std::cout << targetBelajar << "\n";

    return 0;
}