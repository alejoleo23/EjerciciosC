#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int b, f, c;
	cout<<"Ingrese el numero de boleto: ";
	cin>>b;
	if(b%500==0){
		f=b/500;
		c=500;}
	else{
		f=(b/500)+1;
		c=b%500;
	}
	cout<<"Se ubica en la fila: "<<f<<endl;
	cout<<"Se ubica en la columna: "<<c<<endl;
	system("PAUSE");
	return 0;
}

