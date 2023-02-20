#include <iostream>
void ordenmatriz(int *,int *);
void ingresomatriz(int ,int ,float *m);
void reportematriz(int ,int ,float *m);
void promedio(int ,int ,float *m,float *prom);
void reportepromedios(int ,float *prom);
using namespace std;

int main(int argc, char *argv[]) {
	float m[100][100],prom[100];
	int f,c;
	ordenmatriz(&f,&c);
	ingresomatriz(f,c,&m[0][0]);
	reportematriz(f,c,&m[0][0]);
	promedio(f,c,&m[0][0],prom);
	reportepromedios(c,prom);
	return 0;
}

void ordenmatriz(int *f,int *c){
	do
	{
		cout<<"Ingrese el numero de filas de la matriz:";
		cin>>*f;
	} while(*f<=0 || *f>100);
	do
	{
		cout<<"Ingrese numero de columnas de la matriz:";
		cin>>*c;
	} while(*c<=0 || *c>100);
	cout<<endl;
}
void ingresomatriz(int f,int c,float *m){
	int i,j;
	cout<<"Ingrese los datos de la matriz"<<endl;
	cout<<endl;
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"M["<<i<<"]["<<j<<"]=";
			cin>>*(m+c*i+j);
		}
		cout<<endl;
	}
}
void reportematriz(int f,int c,float *m){
	int i,j;
	cout<<"La matriz ingresada :"<<endl;
	cout<<endl;
	for(i=0;i<f;i++)
	{	
		for(j=0;j<c;j++)
			cout<<*(m+c*i+j)<<"\t";
		cout<<endl;
	}
	cout<<endl;
}
void promedio(int f,int c,float *m,float *prom){
	int i,j,s;
	for(i=0;i<c;i++)
	{
		s=0;
		for(j=0;j<f;j++)
		{
			s=s+*(m+c*j+i);
		}
		*(prom+i)=s/f;
	}
}
void reportepromedios(int c,float *prom){
	int i;
	cout<<"Los promedios de cada columna son:"<<endl;
	cout<<endl;
	for(i=0;i<c;i++)
		cout<<"Promedio de la columna "<<i+1<<" es :"<<*(prom+i)<<endl;
}
