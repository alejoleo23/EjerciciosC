#include <iostream>
void ingresofecha(char []);
void reporte(char []);
using namespace std;

int main(int argc, char *argv[]) {
	char c[9];
	ingresofecha(c);
	reporte(c);
	return 0;
}

void ingresofecha(char c[9]){
	cout<<"Ingrese fecha de la forma dd/mm/aa(ejm: 02/08/50) :"<<endl;
	cin.getline(c,9);
	cout<<endl;
}
void reporte(char c[9]){
	int d,m,a;
	d = (c[0] - '0')*10 + (c[1] - '0');
	m = (c[3] - '0')*10 + (c[4] - '0');
	a = 1900 + (c[6] - '0')*10 + (c[7] - '0');
	if(d>31)
		cout<<"Datos erroneos."<<endl;
	else
	{
		switch(m){
		case 1 : cout<<d<<" Enero "<<a<<endl;break;
		case 2 : cout<<d<<" Febrero "<<a<<endl;break;
		case 3 : cout<<d<<" Marzo "<<a<<endl;break;
		case 4 : cout<<d<<" Abril "<<a<<endl;break;
		case 5 : cout<<d<<" Mayo "<<a<<endl;break;
		case 6 : cout<<d<<" Junio "<<a<<endl;break;
		case 7 : cout<<d<<" Julio "<<a<<endl;break;
		case 8 : cout<<d<<" Agosto "<<a<<endl;break;
		case 9 : cout<<d<<" Septiembre "<<a<<endl;break;
		case 10 : cout<<d<<" Octubre "<<a<<endl;break;
		case 11 : cout<<d<<" Noviembre "<<a<<endl;break;
		case 12 : cout<<d<<" Diciembre "<<a<<endl;break;
		default:cout<<"Datos erroneos."<<endl;
		}
	}
}
