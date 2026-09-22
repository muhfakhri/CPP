#include <iostream>
#include <string>

using namespace std;

int main () {
    string username,password;
    int attempts = 0;
    string user = "admin";
    string pass = "admin123";

    do {
    cout << "\n=== Login Mahasiswa ===\n";
    cout << "Username      : ";
    cin >> username;
    cout << "Password      : ";
    cin >> password;

    if (username == user && password == pass) {
        cout << "Berhasil Login!!";
        break;
        
    } else {
        attempts++;
        cout << "Invalid creds. pls try again. attempts " << attempts << " remaining"; 
    }

    } while (attempts < 3);
    
    if(attempts == 3){
        cout << "\n\nAccount has been locked";
        
    }
    return 0;
}