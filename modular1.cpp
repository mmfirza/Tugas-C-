#include <iostream>
using namespace std;

//prototype
void prosesbaca();
int prosestambah();
int proseskurang();
void prosestampil();

//dua variabel
int a, b;

// program utama
	int main () {
	prosesbaca();
	prosestampil();
return 0;
}

//proses membaca
void prosesbaca() {
	cout << "Masukan nilai a : ";
	cin >> a;
	cout << "masukan nilai b : ";
	cin >> b;
}
// proses tambah
  int prosestambah() {
  return a+b;
}

//proses kurang
	int proseskurang() {
 	int hasil;
	hasil = a - b;
return hasil;
}

//proses tampil
void prosestampil() {
	cout <<"hasil tambah :" << prosestambah() << endl;
	cout <<"hasil kurang :" << proseskurang();
}
