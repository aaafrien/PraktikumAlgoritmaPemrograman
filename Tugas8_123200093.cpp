#include <iostream>
using namespace std;

float phi = 3.14;
double L(double r){ 
	return phi*r*r;
}

double Kll(double r){
	return phi*2*r;
}

double Vol(double r, double t){ 
	return phi*r*r*t;
}

int main()
{
	int pil;
	double r,t;
	char repeat;
	do{
		cout << "Hitung Lingkaran ==========" << endl;
		cout << "1. Luas Lingkaran" << endl;
		cout << "2. Keliling Lingkaran" << endl;
		cout << "3. Volume Tabung" << endl;
		cout << "Pilih: "; cin >> pil;
		
		switch(pil){
			case 1 :
				cout << "Jari - Jari\t: "; cin >> r;
				cout << "Luas Lingkaran adalah " << L(r);
				cout << endl;
			break;
			case 2 :
				cout << "Jari - Jari\t: "; cin >> r; 
				cout << "Keliling Lingkaran adalah " << Kll(r);
				cout << endl;
			break;
			case 3 :
				cout << "Jari - Jari\t: "; cin >> r; 
				cout << "Tinggi\t\t: "; cin >> t;
				cout << "Volume Tabung adalah " << Vol(r,t);
				cout << endl;
			break;
			default :
				cout << "Input Salah :)" <<  endl;
		}

		cout << "Ulangi program?(y/n) "; cin >> repeat;
		cout << endl;
		
	} while (repeat == 'y');

	cout << "Program selesai, Terima Kasih :)" << endl << endl;
	system("pause");
	return 0;
}

// 123200093 - Afrien Khoirunnisa Shobar
