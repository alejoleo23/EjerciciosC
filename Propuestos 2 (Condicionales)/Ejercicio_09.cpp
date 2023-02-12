#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) 
{
	float n1,n2,n3,p;
	cout<<"Ingrese puntaje del examen de informatica:";
	cin>>n1;
	cout<<"Ingrese puntaje del examen de calculo:";
	cin>>n2;
	cout<<"Ingrese puntaje del examen de fisica:";
	cin>>n3;
	if(n1>=10.5 && n2>=10.5 && n3>=10.5)
		p=100+20*3;
	else 
		if ((n1>=10.5 && n2>=10.5) || (n1>=10.5 && n3>=10.5))
			p=100+20*2;
		else
			if (n1>=10.5 || n2>=10.5 || n3>=10.5)
				p=100+20;
			else
				p=100;
	cout<<"La propina que recibe es: "<<p<<endl;
	system("pause");
	return 0;
}

