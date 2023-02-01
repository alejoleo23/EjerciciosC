#include <iostream>
void ingresotam(int &);
void ingresadatos(int ,double []);
void desplazamiento(int ,double []);
void reportevector(int ,double []);
using namespace std;

int main(int argc, char *argv[]) {
	int nv;
	double v[100];
	ingresotam(nv);
	ingresadatos(nv,v);
	cout<<"El primer arreglo es :"<<endl;
	reportevector(nv,v);
	desplazamiento(nv,v);
	cout<<"El arreglo luego del desplazamiento es :"<<endl;
	reportevector(nv,v);
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

void desplazamiento(int nv,double v[100]){
	int i;
	double aux;
	aux=v[nv-1];	
	for(i=nv-1;i>=0;i--)
		v[i]=v[i-1];
	v[0]=aux;
}

void reportevector(int nv,double v[100]){
	int i;
	for(i=0;i<nv;i++)
		cout<<"v["<<i<<"] = "<<v[i]<<endl;
}

