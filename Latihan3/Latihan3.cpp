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