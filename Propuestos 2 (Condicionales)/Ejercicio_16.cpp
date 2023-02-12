#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	float a,b,c,x,y;
	cout<<"Ingrese el valor de a:";
	cin>>a;
	cout<<"Ingrese el valor de b:";
	cin>>b;
	cout<<"Ingrese el valor de c:";
	cin>>c;
	cout<<"Ingrese el valor de la absisa:";
	cin>>x;
	cout<<"Ingrese el valor de la ordenada:";
	cin>>y;
	if (a*x+b*y==c)
		cout<<"El punto pertenece a la recta ingresada"<<endl;
	else
		cout<<"El punto no pertenece a la recta ingresada"<<endl;
	system("pause");
	return 0;
}

