#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int n, hm, r;
	float h;
	cout<<"Ingrese la cantidad de hijos:";
	cin>>n;
	cout<<"ingrese la herencia a repartir:";
	cin>>h;
	if (n<4 && n>0)
		{
		r=h/n;
		cout<<"Cada hijo obtendra de herencia:"<<r<<endl;
		}
	else
		if(n>0){
		hm=h/2;
		h=h/2;
		r=h/(n-1);
		cout<<"El mayor de los hijos recibira: "<<hm<<endl;
		cout<<"Los demas hijos recibiran: "<<r<<"aprox."<<endl;
		}
		else
		   cout<<"Ingrese un valor valido"<<endl;
	system("pause");
	return 0;
}

