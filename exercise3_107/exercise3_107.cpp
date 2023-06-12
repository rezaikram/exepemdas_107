#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar {
private:
	int jejari;
public:
	void input() {
		cout << "Masukkan jejari: ";
		cin >> jejari;
		setX(jejari);
	}
	float Luas(int a) {
		return 3.14 * a * a;
	}
	float keliling(int a) {
		return 2 * 3.14 * a;
	}
};

class Bujursangkar :public bidangDatar {
private:
	int sisi;
public:
	void input() {
		cout << "masukkan sisi: ";
		cin >> sisi;
		setX(sisi);
	}
	float Luas(int sisi) {
		return sisi * sisi;
	}
	float keliling(int sisi) {
		return 4 * sisi;
	}
};

int main() {
	Lingkaran lingkaran;
	Bujursangkar bujursangkar;

	cout << "Lingkaran " << endl;lingkaran.input();
	cout << "Luas Lingkaran = " << lingkaran.Luas(lingkaran.getX()) << endl;
	cout << "Keliling Lingkaran = " << lingkaran.Keliling(lingkaran.getX()) << endl;
	cout << "Bujursangkar " << endl;bujursangkar.input();
	cout << "Luas Bujursangkar = " << bujursangkar.Luas(bujursangkar.getX()) << endl;
	cout << "Keliling Bujursangkar = " << bujursangkar.Keliling(bujursangkar.getX()) << endl;

	return 0;
}