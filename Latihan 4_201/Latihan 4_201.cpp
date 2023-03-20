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
		cin >> pilihan;
	}
}
