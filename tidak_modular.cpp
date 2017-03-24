#include <iostream>
using namespace std;

int main () {
//dua variabel
int a, b, temp;

// proses membaca
	cout << "Masukan Nilai a :"; 
	cin >> a;
	cout << "Masukan nilai b :";
	cin >> b;
//proses tukar
	temp = b;
	b = a;
	a = temp;
//proses tampil
	cout <<"==================" << endl;
	cout << "Nilai A sekarang : "<< a << endl;
	cout << "Nilai B sekarang : "<< b;

}
