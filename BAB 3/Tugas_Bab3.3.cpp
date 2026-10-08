#include <iostream>
using namespace std;
int main() {
const float phi = 3.14;
	float r, t, volume;
	
	cout << " === Program Menghitung Volume Tabung === \n";
	cout << " \nMasukkan Jari-Jari Tabung (r) = ";
	cin >> r;
	
	cout << " Masukkan Tinggi Tabung (t) = ";
	cin >> t;
	
	volume = phi * r * 2 * t;
	
	cout << "Volume Tabung Adalah : " << volume << endl;

	return 0;
}

