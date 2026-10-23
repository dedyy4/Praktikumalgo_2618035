#include <iostream>
#include <string>
using namespace std;

	int main() {
	string namaPelanggan;
	string namaMenu = "";
	int pilMenu, jmlPesanan;
	int hargaSatuan = 0;
	int totalHarga;
	int diskon = 0;
	int totalBayar;

	cout << "Masukkan Nama Pemesan : ";
	getline(cin, namaPelanggan);

	cout << "\n---------- MENU KANTIN -------------" << endl;
	cout << "1. Nasi Goreng  - Rp. 15.000" << endl;
	cout << "2. Mie Goreng   - Rp. 12.000" << endl;
	cout << "3. Bakso        - Rp. 10.000" << endl;
	cout << "4. Es Teh       - Rp. 5.000" << endl;

	cout << "Pilih Menu: ";
	cin >> pilMenu;

	switch (pilMenu) {
	    case 1:
	        namaMenu = "Nasi Goreng";
	        hargaSatuan = 15000;
	        break;
	    case 2:
	        namaMenu = "Mie Goreng";
	        hargaSatuan = 12000;
	        break;
	    case 3:
	        namaMenu = "Bakso";
	        hargaSatuan = 10000;
	        break;
	    case 4:
			namaMenu = "Es Teh";
			hargaSatuan = 5000;
			break;
		default:
			cout << "\nPilihan menu tidak valid!" << endl;
        	return 0;
	}

	cout << "Jumlah Pesanan : ";
	cin >> jmlPesanan;

	if (jmlPesanan <= 0) {
	    cout << "\nJumlah pesanan tidak valid!" << endl;
    return 0;
}

	totalHarga = hargaSatuan * jmlPesanan;

	if (totalHarga > 40000) {
    	diskon = totalHarga * 0.08;
	}

	totalBayar = totalHarga - diskon;

	cout << "===== STRUK PEMBAYARAN =====" << endl;
	cout << "Nama Pemesan    : " << namaPelanggan << endl;
	cout << "Harga Satuan    : Rp." << hargaSatuan << endl;
	cout << "Jumlah Pesanan  : " << jmlPesanan << endl;
	cout << "Total Pesanan   : Rp." << totalHarga << endl;
	cout << "Diskon 8%       : Rp." << diskon << endl;
	cout << "Total Pembayaran: Rp." << totalBayar << endl;
	cout << "Terima Kasih Telah Memesan!" << endl;

	return 0;
}

