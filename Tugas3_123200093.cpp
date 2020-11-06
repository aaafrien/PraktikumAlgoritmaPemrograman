#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int pass, matkul;
	string uname;
	float rerata, harian, uts, uas;
	
	cout << "Login Akun ==========" << endl;
	cout << "Username	: "; getline(cin,uname);
	cout << "Password	: "; cin >> pass; cin.ignore();
	cout << "=====================" << endl;

	if(uname=="afrien" && pass==123){
		cout << "Login berhasil!";
		cout << endl << endl;
	
		cout << "Input Nilai Mata Kuliah" << endl;
		cout << "1. Algoritma dan Pemrograman" << endl;
		cout << "2. Kalkulus" << endl;
		cout << "Pilih : "; cin >> matkul;
		
		if(matkul==1){
			cout << "Nilai Harian	: "; cin >> harian;
			cout << "Nilai UTS	: "; cin >> uts;
			cout << "Nilai UAS	: "; cin >> uas;
			cout << endl;
			
			rerata = (harian+uts+uas)/3;
			if(rerata>=80){
				cout << "Anda lulus Algoritma dan Pemrograman dengan nilai " << rerata;
			} else if(rerata<80){
				cout << "Anda tidak lulus Algoritma dan Pemrograman dengan nilai " << rerata;
			}
		
		} else if(matkul==2){
			cout << "Nilai Harian	: "; cin >> harian;
			cout << "Nilai UTS	: "; cin >> uts;
			cout << "Nilai UAS	: "; cin >> uas;
			cout << endl;
	
			rerata = (harian+uts+uas)/3;
			if(rerata>=80){
				cout << "Anda lulus Kalkulus dengan nilai " << rerata;
			} else if(rerata<80){
				cout << "Anda tidak lulus Kalkulus dengan nilai " << rerata;
			}
		} else{
			cout << "Input anda salah!";
		}
	} else if(uname=="afrien" && pass!=123){
		cout << "Password anda salah!";
	} else if(uname!="afrien" && pass!=123){
		cout << "Username dan Password anda salah!";
	} else if(uname!="afrien" && pass==123){
		cout << "Username anda salah!";
	}
}

//123200093 - Afrien Khoirunnisa Shobar

