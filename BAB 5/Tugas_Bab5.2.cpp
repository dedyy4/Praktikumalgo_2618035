#include <iostream>
using namespace std;
int main() {
	
	string nama;
	int nim;
	int pilihan;
	int sisi, panjang, lebar;
	int alas, tinggi;
	int luas;
	
	cout << "Masukkan Nama : ";
	cin >> nama;
	cout << "Masukkan NIM : ";
	cin >> nim;
	cout << "\n=== MENGHITUNG LUAS BANGUN DATAR ===" << endl;
	cout << "1. Persegi" << endl;
	cout << "2. Persegi Panjang" << endl;
	cout << "3. Segitiga" << endl;

	cout << "Pilih Bangun Datar : ";
	cin >> pilihan;

	switch (pilihan) {
	    case 1:
	        cout << "Masukkan Panjang Sisi: ";
	        cin >> sisi;
	
		        luas = sisi * sisi;

	        cout << "Luas Persegi = " << luas << endl;
	        break;

	    case 2:
	        cout << "Masukkan Panjang: ";
	        cin >> panjang;
	
	        cout << "Masukkan Lebar: ";
		        cin >> lebar;

	        luas = panjang * lebar;
	
		        cout << "Luas Persegi Panjang = " << luas << endl;
        break;

	    case 3:
	        cout << "Masukkan Alas: ";
	        cin >> alas;
	
	        cout << "Masukkan Tinggi: ";
	        cin >> tinggi;
		
	        luas = alas * tinggi / 2;
	
	        cout << "Luas Segitiga = " << luas << endl;
    	    break;
	
    	default:
        	cout << "Pilihan Tidak Valid!" << endl;
}

return 0;

}

