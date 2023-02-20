#include <iostream>
void numdatos(int *);
void ingresovectores(int ,float *,float *);
bool compararvectores(int ,float *,float *);
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	float v1[100],v2[100];
	numdatos(&n);
	ingresovectores(n,v1,v2);
	if(compararvectores(n,v1,v2))
		cout<<"Los dos vectores son iguales."<<endl;
	else
		cout<<"Los dos vectores son diferentes."<<endl;
	return 0;
}
void numdatos(int *n){
	do
	{
		cout<<"Ingrese numero de elementos de los vectores:";
		cin>>*n;
	} while(*n<=0 || *n>100);
	cout<<endl;
}
void ingresovectores(int n,float *v1,float *v2){
	int i,j;
	cout<<"Ingreso datos del primer vector:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"V1["<<i<<"]=";
		cin>>*(v1+i);
	}
	cout<<endl;
	cout<<"Ingreso datos del segundo vector:"<<endl;
	for(j=0;j<n;j++)
	{
		cout<<"V2["<<j<<"]=";
		cin>>*(v2+j);
	}
	cout<<endl;
}
bool compararvectores(int n,float *v1,float *v2){
	int i,c=0;
	for(i=0;i<n;i++)
	{
		if(*(v1+i)==*(v2+i))
			c=c+1;
	}
	if(c==n) return true;
	else return false;
}
