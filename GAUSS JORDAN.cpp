#include <iostream>
#include <math.h>
void ingreso(int &);
void modelo(int );
void ingresomatriz(int ,double [100][100]);
void mostrarvector(int ,double [100]);
void mostrarmatriz(int ,double [100][100]);
void gausjordan(int ,double [100][100]);

using namespace std;

int main(int argc, char *argv[]) {
	double a[100][100];
	int n;
	ingreso(n);
	modelo(n);
	ingresomatriz(n,a);
	mostrarmatriz(n,a);
	gausjordan(n,a);
	return 0;
}
void ingreso(int &n){
	//ENTRADA
	do{
		cout<<"Ingrese numero de variables: ";
		cin>>n;
	} while(n<2 || n>100);
	cout<<endl;	
}

void modelo(int n){
	//FORMA DEL SISTEMA
	int i,j;
	cout<<"MODELO DEL SISTEMA"<<endl;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			if(j<n)
				cout<<"a["<<i<<"]["<<j<<"]"<<"x"<<j<<'\t'<<" + ";
			if(j==n)
				cout<<"a["<<i<<"]["<<j<<"]"<<"x"<<j<<'\t';
			
			else 
				if(j==n+1)
			{
				cout<<" = b["<<i<<"]"<<endl;
			}
		}
	}
	cout<<endl;
}

void mostrarmatriz(int n,double a[100][100]){
	int i,j;
	cout<<"LA MATRIZ DEL SISTEMA ES :"<<endl;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			cout<<a[i][j]<<'\t';
		}
		cout<<endl;
	}
	cout<<endl;
}

void ingresomatriz(int n,double a[100][100]){
	//INGRESO MATRIZ A Y B
	int i,j;
	cout<<"Ingrese matriz coeficientes A:"<<endl;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Ingrese matriz B "<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"b["<<i<<"]=";
		cin>>a[i][n+1];
	}
	cout<<endl;
}

void gausjordan(int n,double a[100][100]){
	int res,i,j,k,m;
	double col_pivote,x;
	double tol = 0.0000001; // MODIFICAR TOLERANCIA SI ES NECESARIO
	for(i=1;i<=n;i++)
	{
		res=0;m=i;
		while(res==0)
		{
			if((abs(a[m][i])>tol))
			{
				res=1;
			}
			else
				m++;
		}
		col_pivote=a[m][i];
		for(j=1;j<=n+1;j++)
		{
			x=a[m][j];
			a[m][j]=a[i][j];
			a[i][j]=x/col_pivote;
		}
		for(k=i+1;k<=n;k++)
		{
			x=a[k][i];
			for(j=i;j<=n+1;j++)
			{
				a[k][j]=a[k][j]-x*a[i][j];
			}
		}
	}
	for(i=n;i>=1;i--)
		for(j=(i-1);j>=1;j--)
	{
		a[j][n+1]=a[j][n+1]-a[j][i]*a[i][n+1];
		a[j][i]=0;
	}
	cout<<"EL VALOR DE LAS VARIABLES ES:"<<endl;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"x"<<i<<"= "<<a[i][n+1]<<endl;
	}
}
