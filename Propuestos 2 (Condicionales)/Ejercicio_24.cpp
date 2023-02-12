#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	float cant, cod, d, p, mf;	
	cout<<"Ingrese la cantidad de productos:";
	cin>>cant;
	cout<<"ingrese la letra del codigo del producto: "<<endl;
	cout<<"[200]Codigo 200"<<endl;
	cout<<"[300]Codigo 300"<<endl;
	cout<<"[400]Codigo 400"<<endl;
	cout<<"La ocpion correcta es: ";
	cin>>cod;
	if(cod==200 || cod==300 || cod==400)
	{
		if (cod==200)
			p=20*cant;
		else
			if (cod==300)
				p=35*cant;
			else
				if (cod==400)
					p=50*cant;
			
		if (p<300)
			d=p*0.08;
		else
			if (p<800)
				d=p*0.12;
			else 
				if (p<1000)
					d=p*0.16;
				else
					d=p*0.20;
		mf=p-d;
		cout<<"El Importe de compra es:"<<p<<endl;
		cout<<"El Importe de descuento es:"<<d<<endl;
		cout<<"El Importe a pagar es:"<<mf<<endl;
	}
	else
	   cout<<"Ingrese un codigo valido"<<endl;
	system("pause");
	return 0;
}

