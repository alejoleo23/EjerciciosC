#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	float s, bon, desc, PT, cond;
	char cat;
	cout<<"Ingrese el sueldo del trabajador: ";
	cin>>s;
	cout<<"Ingrese la categoria del trabajador:"<<endl;
	cout<<"Opciones: "<<endl;
	cout<<"[A]Categoria A"<<endl;
	cout<<"[B]Categoria B"<<endl;
	cout<<"[C]Categoria C"<<endl;
	cout<<"[D]Categoria D"<<endl;
	cout<<"Pertenece a la categoria: ";
	cin>>cat;
	cout<<"Ingrese la condicion del trabajador: "<<endl;
	cout<<"[1]Estable"<<endl;
	cout<<"[2]No Estable"<<endl;
	cout<<"Mi condicion es: ";
	cin>>cond;
	if (cat=='A' || cat=='a')
		{
		if (cond==1)
			{
			bon=0.2*s;
			desc=0.06*s;
			}
		else
			{
			bon=0.17*s;
			desc=0.04*s;
			}
		}
	else
		{
		if (cat=='B' || cat=='b')
			{
			if (cond==1)
				{
				bon=0.18*s;
				desc=0.06*s;
				}
			else
				{
				bon=0.15*s;
				desc=0.04*s;
				}
			}
		else
			{
			if (cat=='C' || cat=='c')
				{
				if (cond==1)
					{
					bon=0.15*s;
					desc=0.06*s;
					}
				else
					{
					bon=0.14*s;
					desc=0.04*s;
					}
				}
			else
				{
				if(cat=='D' || cat=='d')
				{
					if (cond==1)
					{
						bon=0.12*s;
						desc=0.06*s;
					}
					else
					{
						bon=0.1*s;
						desc=0.04*s;
					}
				}
				
				}
			}
		}			
	PT=(s+bon)-desc;
	cout<<"La bonificacion es:"<<bon<<endl;
	cout<<"El descuento es:"<<desc<<endl;
	cout<<"El pago total es"<<PT<<endl;
	system("PAUSE");
	return 0;
}

