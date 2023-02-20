#include <iostream>
void ordenmatriz(int *,int *);
void ingresomatriz(int ,int ,float *m);
void reportematriz(int ,int ,float *m);
void minimofila(int ,int ,float *m,float *minimo);
void reporteminimo(int ,float *minimo);
using namespace std;

int main(int argc, char *argv[]) {
	float m[100][100],minimo[100];
	int f,c;
	ordenmatriz(&f,&c);
	ingresomatriz(f,c,&m[0][0]);
	reportematriz(f,c,&m[0][0]);
	minimofila(f,c,&m[0][0],minimo);
	reporteminimo(f,minimo);
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
void minimofila(int f,int c,float *m,float *minimo){
	int i,j;
	for(i=0;i<f;i++)
	{
		*(minimo+i)=*(m+c*i+0);
		for(j=0;j<c;j++)
		{
			if(*(minimo+i)>*(m+c*i+j))
			{
				*(minimo+i)=*(m+c*i+j);
			}
		}
	}
}
void reporteminimo(int f,float *minimo){
	int i;
	cout<<"Los minimos de cada filas :"<<endl;
	cout<<endl;
	for(i=0;i<f;i++)
		cout<<"El minimo de la fila "<<i+1<<" es: "<<*(minimo+i)<<endl;
}
