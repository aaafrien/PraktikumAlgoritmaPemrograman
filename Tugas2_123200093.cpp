#include <iostream>

using namespace std;

int main()
{	
	int ua, ub, uc, ud;
	int b1, b2, b3, b4;
	int total;
	
	cout << "Umur Ayah	: "; cin >> ua;
	cout << "Umur Ibu	: "; cin >> ub;
	cout << "Umur Anak 1	: "; cin >> uc;
	cout << "Umur Anak 2	: "; cin >> ud;
	cout << endl;
	
if(ua <= 12){
	b1 = 15000;
} else if(ua > 13 && ua <= 20){
	b1 = 20000;
} else if(ua > 20){
	b1 = 30000;
}
	
if(ub <= 12){
	b2 = 15000;
} else if(ub > 13 && ub <= 20){
	b2 = 20000;
} else if(ub > 20){
	b2 = 30000;
}

if(uc <= 12){
	b3 = 15000;
} else if(uc > 12 && uc <= 20){
	b3 = 20000;
} else if(uc > 20){
	b3 = 30000;
}

if(ud <= 12){
	b4 = 15000;
} else if(ud > 12 && ud <= 20){
	b4 = 20000;
} else if(ud > 20){
	b4 = 30000;
}

	total = (30*(b1+b2+b3+b4));
	
	cout << "Tagihan satu bulan adalah Rp." << total;
}
