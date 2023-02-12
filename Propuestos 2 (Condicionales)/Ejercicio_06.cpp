#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int A,B,C;
	cout<<"Ingrese el primer numero: ";
	cin>>A;
	cout<<"Ingrese el primer numero: ";
	cin>>B;
	cout<<"Ingrese el primer numero: ";
	cin>>C;
	if (A>B) 
		if (C>A)
			cout<<"El numero intermedio es "<<A<<endl;
		else /*"C seria menor que A"*/
			if (B>C)
				cout<<"El numero intermedio es "<<B<<endl;
			else
				cout<<"El numero intermedio es "<<C<<endl;
	else /*"B seria mayor que A"*/
		if(C>A)
			if (B>C)
				cout<<"El numero intermedio es "<<C<<endl;
			else /*"B seria menor que C"*/
				cout<<"El numero intermedio es "<<B<<endl;
		else /*B es menor que C"*/
			cout<<"El numero intermedio es "<<A<<endl;
	system("pause");
	return 0;
}

