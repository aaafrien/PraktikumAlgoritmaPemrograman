#include <iostream>
using namespace std;

int main()
{
	int angka;
	int max = -999;
	int min = 999;
	int s;
	int s1 = 0;
	double jumlah = 0;
	
	cout << "Masukkan banyak angka : "; cin >> angka;
	int array[angka];
	
	for(int i=0; i<angka; i++){
		cout << "Angka ke-" << i+1 << " : "; cin >> array[i];
	}
	
	cout << endl << endl;
	cout << "_____Hasil_____" << endl;
	
	//Deret
	cout << "Deret\t    : ";
	for(int i=0; i<angka; i++){
		cout << array[i] << " ";
	}
	cout << endl;
	
	//Maksimum & Minimum
	for(int i=0; i<angka; i++){
		if(array[i] > max){
			max = array[i];
		}
		if(array[i] < min){
			min = array[i];
		}
	}
	cout << "Maksimum    : " << max << endl;
	cout << "Minimum\t    : " << min << endl;
	
	//Rata-rata
	for(int i=0; i<angka; i++){
		jumlah += array[i];
	}
	cout << "Rata-rata   : " << jumlah/angka << endl;
	
	//Selisih Max		
	for (int i=0; i<angka; i++){
		s = array[i] - array[i+1];
		if (i == angka-1){
			s = array[i-1] -array[i];
		}
		if (s < 0){
			s *= -1;
		}
		if(s >= s1){
			s1 = s;
		}
	}
	cout << "Selisih Max : " << s1 << endl;

	system("pause");
	return 0;	
}

//123200093 - Afrien Khoirunnisa Shobar
