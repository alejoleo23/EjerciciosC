#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int h, ph, s;
	float sn, i;
	cout<<"Ingrese el tiempo en horas: ";
	cin>>h;
	cout<<"Ingrese el pago por hora: ";
	cin>>ph;
	if(h<=140 && h>0)
	{
		s=h*ph;
		i=0;
	}
	else
		if(h>140){
			s=(h-140)*ph*1.5;
			
			}
		else
			cout<<"Ingrese numero valido"<<endl;
	if(s<=200)
		i=0;
		else
		{
			i=0.15*s;
			sn=s-i;
		}   
	
	cout<<"El sueldo neto es: "<<sn<<endl;
	cout<<"El interes es: "<<i<<endl;
	system("pause");
	return 0;
}
