#include <iostream>
using namespace std;

struct AlamatDetail
{
	string Desa;
	string Kota;
};

struct mahasiswa
{
	string NIM;
	string Nama;
	AlamatDetail Alamat;
	int umur;
};

int main() {
	mahasiswa mhs;

	cout << "Maukan NIM : ";
	cin >> mhs.NIM;
	cout << "Maukan Nama : ";
	cin >> mhs.Nama;
	cout << "Alamat : ";
	cout << "\n\tMasukan Desa : ";
	cin >> mhs.Alamat.Desa;
	cout << "\tMasukan Kota : ";
	cin >> mhs.Alamat.Kota;
}