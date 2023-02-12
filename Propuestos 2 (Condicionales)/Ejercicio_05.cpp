#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	float pu, p;
	cout<<"Ingrese la cantidad de pantalones: ";
	cin>>n;
	cout<<"Ingrese el preio unitario: ";
	cin>>pu;
	if (n>0 && n<5)
		{
		p=n*pu;
		cout<<"El precio a pagar es:"<<p<<endl;
		}
		else
		if (n>0 && n<12)
			{
			p=n*pu*0.85;
			cout<<"El precio a pagar es:"<<p<<endl;
			}
		else
			if (n>0 && n>12)
				{
				p=n*pu*0.70;
				cout<<"El precio a pagar es:"<<p<<endl;
				}
			else
				cout <<"La cantidad de pantalones es cero o menor a cero" << endl;
	system("pause");
	return 0;
}

