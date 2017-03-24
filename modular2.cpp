#include <iostream>
using namespace std;

//prototype
int tambahkan (int a, int b);

//dua variabel
int a, b;

//proses baca
	cout << "masukan nilai a :";
	cin >> a;
	cout << "masukan nilai b :";
	cin >> b;
// program utama
	int main () {
	cout << " hasil : " << tambahkan (a,b) << endl;
return 0;
}

int tambahkan (int a, int b) {
return a+b;
}
