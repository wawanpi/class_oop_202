#include <iostream>
using namespace std;

class Mahasiswa{
public:
	int nim;		//objek
	string nama;
	void tampil() {  //procudure metode
		cout << "nim= " << nim;
		cout << "\nNama" << nama;
	}
};

class MataKuliah {
private:	//akses modifier
	int sks;
	string kode;
	string namaMK;
public:
	void input() {
		cout << " \nMasukan Jumlah sks= ";
		cin >> sks;
		cout << "\nMasukkan kode MK :";
		cin >> kode;
		cout << "\nMasukan Nama Mk = ";
		cin >> namaMK;
	}

	void tampilMK() {
		cout << "\njumlah sks= " << sks;
		cout << "\nKode MK= " << kode;
		cout << "\nNama MK= " << namaMK;

	}
};

int main() {
	Mahasiswa mhs1,mhs2;
	MataKuliah mk;

	cout << "Masukkan NIM = ";
	cin >> mhs1.nim;
	cout << "Masukan Nama = ";
	cin >> mhs1.nama;

	cout << "Masukkan NIM = ";
	cin >> mhs2.nim;
	cout << "Masukan Nama = ";
	cin >> mhs2.nama;


}

