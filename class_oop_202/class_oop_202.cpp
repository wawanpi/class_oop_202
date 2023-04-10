#include <iostream>
using namespace std;

class Mahasiswa{
public:
	int nim;		//objek
	string nama;
	void tampil() {  //procudure metode
		cout << "\nnim= " << nim;
		cout << "\nNama= " << nama;
	}
};

class MataKuliah {
private:	//akses modifier
	int sks;
	string kode;
	string namaMK;
public:
	void inputMK() {
		cout << " \nMasukan Jumlah sks= ";
		cin >> sks;
		cout << "\nMasukkan kode MK :";
		cin >> kode;
		cout << "\nMasukan Nama Mk = ";
		cin >> namaMK;
	}

	void tampilMK() {
		cout << "\nTampilkan Kode Matakuliah = " << sks << endl;
		cout << "Tampilkan Kode Matakuliah = " << kode << endl;
		cout << "Tampilkan Nama MK " << namaMK << endl;

	}

};

int main() {
	Mahasiswa mhs1;
	MataKuliah mk;

	cout << "Masukkan NIM = ";
	cin >> mhs1.nim;
	cout << "Masukan Nama = ";
	cin >> mhs1.nama;

	mk.inputMK();
	mhs1.tampil();
	mk.tampilMK();


}

