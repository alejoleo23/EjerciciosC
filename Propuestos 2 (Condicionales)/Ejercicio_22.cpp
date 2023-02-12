#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int n,a,b,c;
	cout<<"Igrese el numero de 3 cifras: ";
	cin>>n;
	if(n/100<=9 && !(n/10<=9)){
		c=n%10;
		n=n/10;
		b=n%10;
		n=n/10;
		a=n;
		if (c==a)
			cout<<"El numero es capicua"<<endl;
		else
			cout<<"El numero no es capicua"<<endl;}
	else
		cout<<"Ingrese un numero valido"<<endl;
	system("pause");
	return 0;
}

