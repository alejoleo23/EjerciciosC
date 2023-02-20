#include <iostream>
void numdatos(int *);
void ingresovector(int ,float *);
void invertirvector(int ,float *,float *);
void reporte(int ,float *);
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	float v[100],aux[100];
	numdatos(&n);
	ingresovector(n,v);
	invertirvector(n,v,aux);
	reporte(n,aux);
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
	int i;
	cout<<"Ingrese datos del vector:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"V["<<i<<"]=";
		cin>>*(v+i);
	}
	cout<<endl;
}
void invertirvector(int n,float *v,float *aux){
	int i;
	for(i=0;i<n;i++)
		*(aux+(n-(i+1)))=*(v+i);
}
void reporte(int n,float aux[]){
	int i;
	cout<<"El vector invertido es:"<<endl;
	for(i=0;i<n;i++)
		cout<<"V["<<i<<"]="<<*(aux+i)<<endl;
}
