#include <iostream>
using namespace std;

float LuasPersegiPanjang(float p, float l) {
	return p * l;
}
float LuasLingkaran(float r) {
	return 3.14 * r * r;
}
float LuasSegitiga(float a, float t) {
	return 0.5 * a * t;
}

int main()
{
	float panjang, lebar, alas, jejari, tinggi;
	int pilihan;

	do {
		cout << "\n\n====================" << endl;
		cout << "========MENU========" << endl;
		cout << "====================" << endl;
		cout << "1. Luas Persegi Panjang" << endl;
		cout << "2. Luas Lingkaran" << endl;
		cout << "3. Luas Segitiga" << endl;
		cout << "Exit" << endl;
		cout << "Pilihan (1/2/3/4) : ";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			cout << "Masukkan Panjang = ";
			cin >> panjang;
			cout << "Masukkan Lebar = ";
			cin >> lebar;
			cout << "Luas Persegi Panjang = " << LuasPersegiPanjang(panjang, lebar);
			break;
		case 2:
			cout << "Masukkan Jari Jari ";
			cin >> jejari;
			cout << "Luas Lingkaran = " << LuasLingkaran(jejari);
			break;
		case 3:
			cout << "Masukkan Alas = ";
			cin >> alas;
			cout << "Masukkan Tinggi";
			cin >> tinggi;
			cout << "Luas Segitiga = " << LuasSegitiga(alas, tinggi);
			break;
		case 4:
			break;
		default :
			cout << "PILIH YANG BENER DONNNNGGGG!!!!" << endl;
			break;
		}
	} while (pilihan != 4);
}
