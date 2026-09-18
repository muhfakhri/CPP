#include <iostream>
#include <string>

using namespace std;

int main () {

    int suhu,kelembapan;
    string ac,lampu;

    cout << "==RUMAH PINTAR==\n";
    cout << "Suhu (°C): ";
    cin >> suhu;
    cout << "Kelembapan (%): ";
    cin >> kelembapan;
    
    if (suhu > 30 && kelembapan < 50) {
        ac = "ON";
        lampu = "OFF";
    } else if (suhu >= 25 && suhu <= 30 && kelembapan >= 50) {
        ac = "OFF";
        lampu = "ON";
    } else if (suhu < 25) {
        ac = "OFF";
        lampu = "OFF";
    } else {
        cout << "EROR sensor";
        return 0;
    }

    cout << "AC = " << ac << " Lampu = " << lampu;

    return 0;
}