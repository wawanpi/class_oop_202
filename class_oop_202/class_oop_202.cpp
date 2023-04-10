#include <iostream>

using namespace std;

class Mahasiswa{
public:
	int nim;
	string nama;
	void tampil() {
		cout << "nim= " << nim;
		cout << "\nNama" << nama;
	}
};

class MataKuliah {
private:	//akses modifier
};