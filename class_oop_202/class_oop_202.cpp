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
void input(){
	cout << " \nMasukan Jumlah sks= ";
	cin >> sks;
	cout << "\nMasukkan kode MK :";
	cin >> kode;
	cout << "\nMasukan Nama Mk = ";
	cin >> namaMK;
	
