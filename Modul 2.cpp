#include <iostream>
using namespace std;

int main() {

    double diameter = 10.0;
    double r = diameter / 2.0;
    double panjang = 5.0;
    double lebar = 1.5;
    double alas = 4.0;
    double tinggi = 2.5;
    double luasLingkaran = 3.14159 * r * r;
    double luasPersegiPanjang = panjang * lebar;
    double luasSegitiga = 0.5 * alas * tinggi;

    cout << "Luas Lingkaran = " << luasLingkaran << endl;
    cout << "Luas Persegi Panjang = " << luasPersegiPanjang << endl;
    cout << "Luas Segitiga = " << luasSegitiga << endl;

    return 0;
}