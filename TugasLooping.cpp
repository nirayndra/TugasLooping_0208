#include <iostream>
using namespace std;

int angka;
int pilihan;

bool CekPrima() {
    if (angka < 2) return false;
    int i = 2;
    while (i * i <= angka) {
        if (angka % i == 0) return false;
        i++;
    }
    return true;
}

bool CekFibonacci() {
    int a = 0, b = 1;
    while (b < angka) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return (b == angka || angka == 0);
}

void inputangka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}

void TampilHasilPrima() {
    if (CekPrima())
        cout << angka << " merupakan bilangan prima." << endl;
    else
        cout << angka << " bukan bilangan prima." << endl;
}

void TampilHasilFibonacci() {
    if (CekFibonacci())
        cout << angka << " merupakan bilangan fibonacci." << endl;
    else
        cout << angka << " bukan bilangan fibonacci." << endl;
}

void tampilMenu() {
    cout << "\n=== MENU ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;
}

int main() {
    while (true) {
        tampilMenu();
        switch (pilihan) {
            case 1:
                inputangka();
                TampilHasilPrima();
                break;
            case 2:
                inputangka();
                TampilHasilPrima();
                break;
            case 0:
                cout << "Program selesai." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        }
    }
    return 0;
}