#include <iostream>
using namespace std;

int main()
{
    float alas, tinggi, luas;
    cout << "Masukan Alas =";
    cin >> alas;
    cout << "Masukan Tinggi =";
    cin >> tinggi;
    luas = alas * tinggi / 2;
    cout << "Luasnya =" << luas << endl;

    float sisi;
    cout << "Masukan Sisi=";
    cin >> sisi;
    luas = sisi * sisi;
    cout << "Luasnya =" << luas;
}