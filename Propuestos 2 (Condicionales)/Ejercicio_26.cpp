#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	float n,b,d,p;
	char sexo,ec;
	cout<<"El sueldo del trabador es:";
	cin>>n;
	cout<<"Ingresar sexo: "<<endl;
	cout<<"[M]Masculino"<<endl;
	cout<<"[F]Femenino"<<endl;
	cout<<"El sexo es: ";
	cin>>sexo;
	cout<<"Ingresar Estado civil: "<<endl;
	cout<<"[S]Soltero(a)"<<endl;
	cout<<"[C]Casado(a)"<<endl;
	cout<<"El estado civil es: ";
	cin>>ec;
	if (sexo=='M'||sexo=='m')
		if (ec=='S'||ec=='s')
			{
			b=0.08*n;
			d=(n+b)*0.06;
			}
		else
			{
			b=0.1*n;
			d=(n+b)*0.04;
			}
	else
		if (ec=='S'||ec=='s')
			{
			b=0.1*n;
			d=(n+b)*0.05;
			}	
		else
			{
			b=0.12*n;
			d=(n+b)*0.03;
			}
	p=(n+b)-d;
	cout<<"La bonificacion es:"<<b<<endl;
	cout<<"El descuento es:"<<d<<endl;
	cout<<"El pago total es:"<<p<<endl;
	system("pause");
	return 0;
}

