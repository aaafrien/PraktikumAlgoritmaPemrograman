#include <iostream>
using namespace std;

int main()
{
	int pil, p, l, t;
	int x, y;
	int a, b;
	
	cout << "Gambar Bangun Datar ===========" << endl;
	cout << "1. Kotak bolong" << endl;
	cout << "2. Segitiga" << endl;
	cout << "Pilih : "; cin >> pil;
	
	switch(pil){
		case 1 :
			cout << "\nPanjang\t: "; cin >> p;
			cout << "Lebar\t: "; cin >> l;
			
			for(x=1; x<=p; x++){
				for(y=1; y<=l; y++){
					if(x==1 || x==p || y==1 || y==l){
						cout << "* ";
					} else {
						cout << "  ";
					}
				}
				cout << endl;
			}
		break;
		case 2 :
			cout << "\nTinggi\t: "; cin >> t;
			for(x=1; x<=t; x++){
				a = t-1;
				b = x;
				for(y=1; y<=b; y++){
					if(y==1){
						cout << x << " ";
					} else{
						cout << x+a << " ";
						x = x+a;
						a--;
					}
				}
				x = b;
				cout << endl;
			}
			break;
		default : cout << "\nInput anda salah!" << endl;
	}
	cout << endl;
	system("pause");
	cin.get();
	return 0;
}
