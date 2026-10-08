#include <iostream>
using namespace std;
int main() {
	int nilai_pertama;
	int nilai_kedua;
	string hasil;

	cout << "Masukkan nilai pertama	: ";
	cin >> nilai_pertama;
	cout << "Masukkan Nilai Kedua	: ";
	cin >> nilai_kedua;
	
	if ( nilai_pertama >=60 && nilai_kedua >=60){
		hasil = "Selamat, Anda Lulus";
	}
	else{
		hasil = "Anda Dinyatakan Tidak Lulus";
	}
	cout << hasil;
	
	return 0;
}

