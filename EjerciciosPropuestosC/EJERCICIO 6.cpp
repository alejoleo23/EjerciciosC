#include <iostream>
using namespace std;
void ingresofecha(int *,int *);
void reporteestacion(int ,int);

int main(int argc, char *argv[]) {
	int d,m;
	ingresofecha(&d,&m);
	reporteestacion(d,m);
	return 0;
}
void ingresofecha(int *d,int *m){
	do
	{
		cout<<"Ingrese dia:";
		cin>>*d;
	} while(*d<=0);
	do
	{
		cout<<"Ingrese mes:";
		cin>>*m;
	} while(*m<=0 or *m>=13);
}
void reporteestacion(int d,int m){
	switch (m)
	{
	case 1:case 2:
		cout<<"Es Verano.";
		break;
	case 3:
		if(d>=22)
			cout<<"Es Otoño.";
		else
			cout<<"Es Verano.";
		break;
	case 4:case 5:
		cout<<"Es Otoño.";
		break;
	case 6:
		if(d>=22)
			cout<<"Es Invierno.";
		else
			cout<<"Es Otoño.";
		break;
	case 7:case 8:
		cout<<"Es Invierno.";
		break;
	case 9:
		if(d>=23)
			cout<<"Es Primavera.";
		else
			cout<<"Es Invierno.";
		break;
	case 10:case 11:
		cout<<"Es Primavera.";
		break;
	case 12:
		if(d>=22)
			cout<<"Es verano.";
		else
			cout<<"Es Primavera.";
		break;
	}
}
