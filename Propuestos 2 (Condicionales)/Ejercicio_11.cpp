#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	float x,y,z;
	cout<<"Ingrese el primer lado del triangulo: ";
	cin>>x;
	cout<<"Ingrese el segundo lado del triangulo: ";
	cin>>y;
	cout<<"Ingrese el tercer lado del triangulo: ";
	cin>>z;
	if (x>0 && y>0 && z>0)
		if (x+y>z && x+z>y && y+z>x)
		{
			if (x==y && y==z)
				cout<<"Estos lados conforman un triangulo equilatero"<<endl;
			else
				if (x==y || z==x || y==z)
					cout<<"Estos lados conforman un triangulo isóceles"<<endl;
				else 
					cout<<"Estos lados conforman un triangulo escaleno"<<endl;
		}
		else
			cout<<"No es un triangulo"<<endl;
	else
		cout<<"Datos incorrectos"<<endl;
	system("pause");
	return 0;
}

