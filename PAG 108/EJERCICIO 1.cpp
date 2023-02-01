#include <iostream>
void ingresotam(int &);
void ingresadatos(int ,double []);
double multelementos(int , double []);
int cuentaceros(int ,double []);
using namespace std;

int main(int argc, char *argv[]) {
	int nv;
	double v[100],resultado;
	ingresotam(nv);
	ingresadatos(nv,v);
	if(nv<10)
	{
		resultado = multelementos(nv,v);
		cout<<"Como el tamaño del arreglo es menor a 10, entonces :"<<endl;
		cout<<" La multiplicacion de los elementos del vector es :"<<resultado<<endl;
	}
	else
	   {
		resultado = cuentaceros(nv,v);
		cout<<"Como el tamaño del arreglo es mayor a 10, entonces :"<<endl;
		cout<<"La cantidad de elementos del vector que son cero son : "<<resultado<<endl;
	}
	return 0;
}
void ingresotam(int &nv){
	do
	{
		cout<<"Ingrese tamaño del vector :";
		cin>>nv;
	} while(nv<=0);
	cout<<endl;
}

void ingresadatos(int nv,double v[100]){
	int i;
	cout<<"Ingresa datos de los elementos del vector :"<<endl;
	for(i=0;i<nv;i++)
	{
		cout<<"v["<<i<<"]= ";
		cin>>v[i];
	}
	cout<<endl;
}

double multelementos(int nv,double v[100]){
	int i;
	double resultado=1;
	for(i=0;i<nv;i++)
		resultado=resultado*v[i];
	return resultado;
}

int cuentaceros(int nv,double v[100]){
	int i,cont=0;
	for(i=0;i<nv;i++)
		if(v[i]==0)
			cont++;
	return cont;
}

