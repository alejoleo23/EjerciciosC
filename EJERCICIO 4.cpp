#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char letra;
	bool b;
	do
		{
		cout<<" ingrese la letra C: ";
		cin>>letra;
		if(letra=='C')
			b=true;
		else
			b=false;
		if(b==false)
			cout<<"Vuelva a ingresar la letra C"<<endl;
	} while(b==false);
	cout<<"Muchas gracias "<<endl;
	return 0;
}

