#include <iostream>
using namespace std;

struct data_perpus {
string nama_buku, judul_buku,penerbit;
int harga;
 };
 
 data_perpus perpus[3];
 int main (){
	cout << "data buku\n";
	cout << "===============\n";
	for (int a =0; a<3; a++)
	{
	cout << "masukan nama buku ke-"<<a<<endl;
	cout << "nama buku: "; cin >> perpus[a].nama_buku;
	cout << "judul buku: "; cin >> perpus[a].judul_buku;
	cout << "penerbit: "; cin >> perpus[a].penerbit;
	cout << "Harga : "; cin >> perpus [a].harga;
	}
	for (int a=0; a < 3 ; a++)
	{
	cout << "perpus"<< a << endl;
	cout << perpus[a].nama_buku<< endl;
	cout << perpus[a].judul_buku<<endl;
	cout << perpus[a].penerbit<<endl;
	cout << perpus[a].harga<<endl;
	}
	return 0;
	}