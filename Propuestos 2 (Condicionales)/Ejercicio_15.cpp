#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int n,a,b,c,d;
	cout<<"Ingrese un numero de 4 cifras:";
	cin>>n;
	d=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	a=n;
	if (a%2==0 && b%2==0 && c%2==0 && d%2==0)
		cout<<"El numero cumple la condicion"<<endl;
	else
		cout<<"El numero no cumple con la condicon"<<endl;
	system("pause");
	return 0;
}

