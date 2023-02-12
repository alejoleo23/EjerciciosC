#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cout<<"Ingrese el numero: ";
	cin>>n;
	if(n>0 && n%2==0)
		cout<<"El numero es divisible por 2"<<endl;
	else
		if (n>0 && n%3==0)
			cout<<"Es un numero divisible por 3"<<endl;
		else
			cout<<"No es divisible por 2 o 3, o es menor a 1"<<endl;
	system("pause");
	return 0;
}

