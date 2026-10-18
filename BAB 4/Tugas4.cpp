#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string nama, kategori;
    int nim, tanggungan;
    double pendapatan, tarif, pajak, pajakAkhir;

    cout << "==== PROGRAM PAJAK PENDAPATTAN ====" << endl;

    cout << "Masukkan Nama       : ";
    getline(cin, nama);

    cout << "Masukkan NIM        : ";
    cin >> nim;

    cout << "Masukkan Pendapatan : Rp. ";
    cin >> pendapatan;

    if (pendapatan < 0) {
        cout << "Pendapatan tidak valid!" << endl;
        return 0;
    }

    if (pendapatan < 5000000) {
        kategori = "Pendapatan di bawah Rp5.000.000";
        tarif = 0;
    } else if (pendapatan < 10000000) {
        kategori = "Pendapatan Rp5.000.000 - <Rp10.000.000";
        tarif = 0.05;
    } else if (pendapatan < 20000000) {
        kategori = "Pendapatan Rp10.000.000 - <Rp20.000.000";
        tarif = 0.10;
    } else {
        kategori = "Pendapatan Rp20.000.000 atau lebih";
        tarif = 0.15;
    }

    pajak = pendapatan * tarif;

    cout << "Memiliki tanggungan? (1 = Ya, 0 = Tidak): ";
    cin >> tanggungan;

    if (tanggungan == 1) {
        pajakAkhir = pajak - 100000;
    } else {
        pajakAkhir = pajak;
    }

    if (pajakAkhir < 0) {
        pajakAkhir = 0;
    }

    cout << fixed << setprecision(0);
    cout << endl;
    cout << "==== HASIL PERHITUNGAN PAJAK ====" << endl;
    cout << "Nama             		: " << nama << endl;
    cout << "NIM              		: " << nim << endl;
    cout << "Tarif Pajak      		: " << tarif * 100 << "%" << endl;
    cout << "Pendapatan      		: Rp" << pendapatan << endl;
    cout << "Pajak Akhir      		: Rp" << pajakAkhir << endl;

    return 0;
}
