#include <iostream>
using namespace std;

int main()
{
	int a, b, c, a1, b1, pil;
	
	cout << "Perkalian & Perpangkatan======" << endl;
	cout << "1. Perkalian" << endl;
	cout << "2. Perpangkatan" << endl;
	cout << "Pilih : "; cin >> pil;
	switch(pil){
		case 1 :
			cout << "Input angka N : "; cin >> a;
			cout << "Input angka M : "; cin >> b;
			cout << "Hasil " << a << " x " << b << endl;
			b1 = b;
			c = 0;
			while(c<=a){
				c++;
				if(c<a){
					b1 = b + b1;
					cout << b << " + ";
				} else if(c == a){
					cout << b << " = " << b1 << endl;
				}
			}
			break;
		case 2 :
			cout << "Input angka N : "; cin >> a;
			cout << "Input angka M : "; cin >> b;
			cout << "Hasil " << a << " x " << b << endl;
			a1 = a;
			c = 0;
			while(c<=b){
				c++;
				if(c<b){
					a1 = a * a1;
					cout << a << " x ";
				} else if(c == b){
					cout << a << " = " << a1 << endl;
				}
			}
			break;
		default :
			cout << "salah input!";
	}
	cout << "\nTerima kasih :)" << endl << endl;
	
	system("pause");
	cin.get();
	return 0;
}

//123200093 - Afrien Khoirunnisa Shobar
