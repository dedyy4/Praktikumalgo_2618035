#include <iostream>
using namespace std;
int main() {
	
	string nama;
	int nim;
	int nilai;
	
	cout << "Nama : ";
	cin >> nama;
	cout << "NIM : ";
	cin >> nim;
	cout << "Masukkan Nilai (0-100) : ";
	cin >> nilai;
	
	switch (nilai) {
		case 80 ... 100: cout<< "Grade A" <<endl; break;
		case 70 ... 79: cout << "Grade B" <<endl; break;
		case 60 ... 69: cout << "Grade C" <<endl; break;
		case 40 ... 59: cout << "Grade D" <<endl; break;
		case 0 ... 39: cout << "Grade E" <<endl; break;
		default :cout<<"Nilai Tidak Valid" <<endl;
	}

	return 0;
}  

