#include <iostream>
using namespace std;

int main (){
	int nilai;
	cout << "masukan angka : ";
	cin >>nilai;
	if(nilai>=80 && nilai<=100)
		cout << "A";
		if (nilai>=65 && nilai<=79)
		cout<<"B";
		if (nilai>=50 && nilai<=64)
		cout<<"C";
		if (nilai>=35 && nilai<= 49)
		cout<<"D";
		if (nilai>=0 && nilai<= 34)
		cout<<"E";
		
	return 0 ;
}
