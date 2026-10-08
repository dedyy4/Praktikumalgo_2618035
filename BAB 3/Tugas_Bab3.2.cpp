#include <iostream>
using namespace std;
int main() {

    double celcius;

    cout << "	PROGRAM KONVERSI SUHU" << endl << endl;

    cout << "Masukan Suhu(Celcius) = ";
    cin >> celcius;

    double fahrenheit = (9.0 / 5.0 * celcius) + 32;
    double reamur = (4.0 / 5.0 * celcius);
    double kelvin = celcius + 273.15;

    cout << "Jadi,		" << celcius << " derajat celcius		= " << fahrenheit << " derajat fahrenheit" << endl;
    cout << "		" << fahrenheit << " derajat fahrenheit		= " << reamur << " derajat reamur" << endl;
    cout << "		" << reamur << " derajat reamur		= " << kelvin << " derajat kelvin" << endl;
   
    return 0;
}

