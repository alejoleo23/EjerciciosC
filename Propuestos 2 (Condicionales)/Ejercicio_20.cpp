#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
	float h,m,p;
	cout<<"Ingrese las horas:";
	cin>>h;
	cout<<"Ingrese los minutos(De 00 a 59):";
	cin>>m;
	if(m==0)
		p=(h*2.5);
	else
		if(m<=59){
		p=(h*2.5)+2.5;
	}
		else
		   cout<<"Ingrese un minuto valido"<<endl;
			p=0;

	cout<<"El total a pagar es:"<<p<<endl;
	system("pause");
	return 0;
}

