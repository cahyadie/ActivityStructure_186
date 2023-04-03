#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string Nama;
	string alamat;
	int umur;
};

int mainn() {
	mahasiswa mhs1, mhs2;
	mhs1.NIM = "20220140019;";
	mhs1.Nama = "Ardian Mulya";
	mhs1.alamat = "Wonosobo";
	mhs1.umur = 20;

	cout << "Masukan NIM : ";
	cin >> mhs2.NIM;
	cout << "Masukan Nama : ";
	cin >> mhs2.Nama;
	cout << "Maukan Alamat : ";
	cin >> mhs2.alamat;
	cout << "Masukan Umur : ";
	cin >> mhs2.umur;

	cout << "\nNIM = " << mhs1.NIM;
	cout << "\nNama = " << mhs1.Nama;
	cout << "\nAlamat = " << mhs1.alamat;
	cout << "\nUmur = " << mhs1.umur;
}
