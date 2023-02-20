#include <iostream>
using namespace std;
void ingreso(int *,int *);
int calculomcm(int ,int);
int calculomcd(int ,int);
void reporte(int ,int );

int main(int argc, char *argv[]) {
	int n1,n2,mcm,mcd;
	ingreso(&n1,&n2);
	calculomcm(n1,n2);
	mcm=calculomcm(n1,n2);
	calculomcd(n1,n2);
	mcd=calculomcd(n1,n2);
	reporte(mcm,mcd);
	return 0;
}
void ingreso(int *n1,int *n2){
	do
	{
		cout<<"Ingrese primer numero:";
		cin>>*n1;
	} while(*n1<=0);
	do
	{
		cout<<"Ingrese segundo numero:";
		cin>>*n2;
	} while(*n2<=0);
}
int calculomcm(int n1,int n2){
	int mayor,mcm;
	mayor=n1;
	if(n2>mayor)
		mayor=n2;
	mcm=mayor;
	while (mcm%n1!=0 or mcm%n2!=0)
		mcm=mcm+1;
	return mcm;
}
int calculomcd(int n1,int n2){
	int mcd=1,d=2;
	while(d<=n1 && d<=n2)
	{
		if(n1%d==0 && n2%d==0)
		{
			mcd=mcd*d;
			n1=n1/d;
			n2=n2/mcd;
		}
		else
		   d=d+1;
	}
	return mcd;
}
void reporte(int mcm,int mcd){
	cout<<"El mcm de los dos numeros es:"<<mcm<<endl;
	cout<<"El mcd de los dos numeros es:"<<mcd<<endl;
}
