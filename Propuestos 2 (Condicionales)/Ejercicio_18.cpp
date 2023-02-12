#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float a,b,c,s,A;
	cout<<"Ingrese el primer lado del triangulo: ";
	cin>>a;
	cout<<"Ingrese el segundo lado del triangulo: ";
	cin>>b;
	cout<<"Ingrese el tercer lado del triangulo: ";
	cin>>c;
	s=(a+b+c)/2;
	if (s>a && s>b && s>c)
		{
		A=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"El area de dicho triangulo es:"<<A<<endl;
		}
	else
		cout<<"Datos Incorrectos"<<endl;
	system("pause");
	return 0;
}

