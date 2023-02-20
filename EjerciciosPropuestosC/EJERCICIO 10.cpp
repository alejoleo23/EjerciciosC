#include <iostream>
void numdatos(int *);
void ingresovector(float *);
float mediaarmonica(int ,float *);
void reporte(float );
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	float v[],ma;
	numdatos(&n);
	ingresovector(n,v);
	mediaarmonica(n,v);
	ma=mediaarmonica(n,v);
	reporte(ma);
	return 0;
}
void numdatos(int *n){
	do
	{
		cout<<"Ingrese numero de elementos del vector:";
		cin>>*n;
	}
	while(*n<=0 || *n>100);
	cout<<endl;
}
void ingresovector(int n,float *v){
	cout<<"Ingrese datos del vector:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"V["<<i<<"]=";
		cin>>*(v+i);
	}
	cout<<endl;
}
float mediaarmonica(int n,float *v){
	float ma=0;
	for(i=0;i<n;i++)
	{
		
	}
	return ma;
}
void reporte(float ma){
	cout<<"La media armonica de los datos es :"<<ma<<endl;
}
