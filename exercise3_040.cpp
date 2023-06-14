#include <iostream>
#include <string>
#include <vector>
using namespace std;

class buku {
public:
	string nama;
	vector<class pengarang*> daftar_pengarang;
	buku(string pNama) : nama(pNama) {}
	void tambahpengarang(class pengarang*);
	void cetakpengarang();
};

class penerbit {
public:
	string nama;
	vector<class pengarang*> daftar_pengarang;
	penerbit(string pNama) : nama(pNama) {}
	void tambahpengarang(class pengarang*);
	void cetakpengarang();
};

class pengarang {
public:
	string nama;
	vector<class buku*> daftar_buku;
	vector<class penerbit*> daftar_penerbit;
	pengarang(string pNama) : nama(pNama) {}
	void tambahbuku(class buku*);
	void cetakbuku();
	void cetakpenerbit();
};

void buku::tambahpengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}

void buku::cetakpengarang() {
	cout << "Daftar pengarang pada penerbit \"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void pengarang::tambahbuku(buku* pBuku) {
	daftar_buku.push_back(pBuku);
}

void pengarang::cetakbuku() {
	cout << "Daftar buku yang dikarang \"" << this->nama << "\":\n";
	for (auto& a : daftar_buku) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void pengarang::cetakpenerbit() {
	cout << "Daftar penerbit yang diikuti \"" << this->nama << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

int main() {
	penerbit* varPenerbit = new penerbit("Gama Press");
	penerbit* varPenerbit1 = new penerbit("Intan Pariwara");
	pengarang* varPengarang = new pengarang("Joko");
	pengarang* varPengarang1 = new pengarang("Lia");
	pengarang* varPengarang2 = new pengarang("Giga");
	pengarang* varPengarang3 = new pengarang("asroni");
	buku* varBuku = new buku("Fisika");
	buku* varBuku1 = new buku("Algoritma");
	buku* varBuku2 = new buku("Basisdata");
	buku* varBuku3 = new buku("Dasar Pemrograman");
	buku* varBuku4 = new buku("Matematika");
	buku* varBuku5 = new buku("Multimedia 1");

	varPenerbit->cetakpengarang(varPengarang);
}