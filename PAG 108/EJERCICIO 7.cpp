#include <iostream>
void ingresotam(int &);
void ingresadatos(int ,int []);
void nuevovector(int ,int [],int []);
void reportevector(int ,int []);
using namespace std;

int main(int argc, char *argv[]) {
	int nv;
	int v[100],v1[100];
	ingresotam(nv);
	ingresadatos(nv,v);
	cout<<"El primer vector ingresado fue : "<<endl;
	reportevector(nv,v);
	nuevovector(nv,v,v1);
	cout<<"El nuevo vector generado es :"<<endl;
	reportevector(nv,v1);
	return 0;
}

void ingresotam(int &nv){
	do
	{
		cout<<"Ingrese un tamaño par del vector :";
		cin>>nv;
	} while(nv%2!=0 || nv<=0);
	cout<<endl;
}

void ingresadatos(int nv,int v[100]){
	int i;
	cout<<"Ingresa datos de los elementos del vector que sean multiplos de 2 o 11:"<<endl;
	for(i=0;i<nv;i++)
	{
		do
		{
			cout<<"v["<<i<<"]= ";
			cin>>v[i];
		} while(v[i]%2!=0 && v[i]%11!=0);
	}
	cout<<endl;
}
void nuevovector(int nv,int v[100],int v1[100]){
	int i;
	for(i=0;i<nv;i++)
		v1[i]=v[i] - v[nv-(i+1)];
}

void reportevector(int nv,int v[]){
	int i;
	for(i=0;i<nv;i++)
		cout<<"v["<<i<<"] = "<<v[i]<<endl;
}
