#include <iostream>
using namespace std;

int main(){
	
string namaPasien;
int beratBadan;
int tinggiBadan;
int beratIdeal;

cout << "Masukkan nama anda: ";
cin >> namaPasien;
cout << endl;
cout << "Masukkan berat badan anda: ";
cin >> beratBadan;
cout << endl;
cout << "Masukkan tinggi badan anda: ";
cin >> tinggiBadan;
cout << endl;
beratIdeal = tinggiBadan - 110;

if(beratBadan > beratIdeal){
	cout << "Kegemukan, coba mulai pola hidup yang lebih sehat lagi";
}else if(beratIdeal == beratBadan){
	cout << "Berat badan anda ideal, pertahankan!";
}else if(beratBadan < beratIdeal){
	cout << "Terlalu kurus, coba tambahkan nutrisi ke tubuh anda lebih banyak lagi";
}else{
	cout << "netnot";
}
	
	
	return 0;
}
