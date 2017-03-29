#include<iostream>
using namespace std;

bool iswithinrange(float nilai, int max, int min);

float ip, total;
bool valid;
int jml_mahasiswa, jumlah_lulus, jumlah_tidaklulus;

int main() {	
	do {
		cout << "masukan nilai : "; cin >> ip;
		valid = iswithinrange(ip,4,0);
		if (valid){
			if (ip >=2.75) {
				jumlah_lulus++;
			}else{
				jumlah_tidaklulus++;
			}
			total = total + ip;
			jml_mahasiswa++;
		} else {
			cout << "tidak ada data" << endl;
		}
	}while (ip != -999);

	cout <<"banyaknya mahasiswa :"  << jml_mahasiswa << endl;
	cout <<"banyaknya jumlah_lulus :" << jumlah_lulus << endl;
	cout <<"banyaknya tidak lulus :" << jumlah_tidaklulus << endl;
	cout <<"rata-rata nilai ip :" << (total/jml_mahasiswa) << endl;
}

bool iswithinrange(float nilai, int max, int min){
	if (nilai > max || nilai <= 0){
		return false;
	}
	return true;
}

