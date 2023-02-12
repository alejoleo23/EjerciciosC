#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
	float a, b, c, d, z, p;
	cout<<"Ingrese la nota del primer examen: ";
	cin>>a;
	cout<<"Ingrese la nota del segundo examen: ";
	cin>>b;
	cout<<"Ingrese la nota del tercer examen: ";
	cin>>c;
	cout<<"Ingrese la nota del cuarto examen: ";
	cin>>d;
	if(a>=0 && b>=0 && c>=0 && d>=0 && a<=20 && b<=20 && c<=20 && d<=20)
	{
		z=a;
		if(b<z)
			z=b;
		if(c<z)
			z=c;
		if(d<z)
			z=d;
		p=(a+b+c+d-z)/3;
		cout<<"La menor nota es: "<<z<<endl;
		cout<<"El promedio es: "<<p<<endl;
	}
	else
	   cout<<"Ingrese una nota valida"<<endl;	
	system("pause");
	return 0;
}

