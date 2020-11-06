#include <iostream>

using namespace std;

int main ()
{
	string nama;
	int nim, uts, uas, rata;
	
	cout << "Nama : "; getline(cin,nama);
	cout << "NIM : "; cin >> nim;
	cout << "UTS : "; cin >> uts;
	cout << "UAS : "; cin >> uas;
	cout << endl;

	rata = (uts+uas)/2;

	cout << "Hai, nama saya " << nama << ", NIM " << nim << endl;
	cout << "Nilai akhir saya " << rata << endl;

}

