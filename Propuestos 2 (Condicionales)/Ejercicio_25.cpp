#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	double p,h,imc;
	cout<<"El peso de la persona en kilogramos es:";
	cin>>p;
	cout<<"La altura de la persona en metros es:";
	cin>>h;
	if(p>0 || h>10)
	{
		imc=p/pow(h,2);
		if (imc<20)
			cout<<"Su contextura es delgada"<<endl;
		else
			if (imc<25)
				cout<<"Su contextura es normal"<<endl;
			else
				if (imc<27)
					cout<<"Posee sobrepeso"<<endl;
				else
					cout<<"Usted tiene obesidad"<<endl;
	}
	else
	   cout<<"Ingrese datos correctos"<<endl;
	system("pause");
	return 0;
}

