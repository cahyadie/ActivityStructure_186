#include <iostream>
using namespace std;

struct AlamatDetail
{
	char Desa[20];
	char Kota[20];
};

struct Mahasiswa
{
	char NIM[20];
	char Nama[20];
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "Masukan NIM : ";
		cin.getline(mhs[i].NIM, 12);
		cout << "Masukan Nama : ";
		cin.getline(mhs[i].Nama, 25);
		cout << "Alamat : ";
		cout << "\n\tMasukan desa : ";
		cin.getline(mhs[i].alamat.Desa, 20);
		cout << "\tMasukan Kota : ";
		cin.getline(mhs[i].alamat.Kota, 20);
		cout << "masukan umur : ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
	}
}