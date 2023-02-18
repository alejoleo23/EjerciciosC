#include <iostream>
#include <math.h>
void ingreso(int &);
void modelo(int );
void ingresomatriz(int ,double [100][100]);
void mostrarvector(int ,double [100]);
void mostrarmatriz(int ,double [100][100]);
void substitute(int ,double [100][100],double [100]);
void gaus(int ,double [100][100],double [100]);
void eliminate(int, double [100][100],double [100],double ,double );
void pivot(int ,double [100][100],double [100],int );
using namespace std;

int main(int argc, char *argv[]) {
	double a[100][100],x[100];
	int n;
	ingreso(n);
	modelo(n);
	ingresomatriz(n,a);
	mostrarmatriz(n,a);
	gaus(n,a,x);
	cout<<endl;
	mostrarvector(n,x);
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
void mostrarvector(int n,double x[100]){
	int i;
	cout<<"EL VECTOR ES:"<<endl;
	for(i=1;i<=n;i++)
		cout<<"x"<<i<<" = "<<x[i]<<endl;
}
void gaus(int n,double a[100][100],double x[100]){
	int i,j;
	double s[100];
	double er=0;
	double tol=0.1;
	for(i=1;i<=n;i++)
	{
		s[i]=abs(a[i][1]);
		for(j=2;j<=n;j++)
		{
			if(abs(a[i][j])>s[i])
				s[i]=abs(a[i][j]);
		}
	}
	
	eliminate(n,a,s,tol,er);	
	if(er!=-1)
	{
		substitute(n,a,x);
	}
	else if(er==-1)
	{
		cout<<"LA MATRIZ ES SINGULAR , NO ES POSIBLE EL METODO DE GAUSS"<<endl;
	}
}

void substitute(int n,double a[100][100],double x[100]){
	int i,j;
	double suma;
	x[n]=a[n][n+1]/a[n][n];
	for(i=n-1;i>=1;i--)
	{
		suma=0;
		for(j=i+1;j<=n;j++)
		{
			suma=suma+a[i][j]*x[j];
		}
		x[i]=(a[i][n+1]-suma)/a[i][i];
	}
}

void eliminate(int n, double a[100][100],double s[100],double tol,double er){
	int i,j,k;
	double f=1;
	for(k=1;k<=n-1;k++)
	{
		pivot(n,a,s,k);
		if(abs(a[k][k]/s[k])<tol)
		{
			er=-1;
		}
		for(i=k+1;i<=n;i++)
		{
			f=a[i][k]/a[k][k];
			for(j=k+1;j<=n;j++){
				a[i][j]=a[i][j]-f*a[k][j];
			}
			a[i][n+1]=a[i][n+1]-f*a[k][n+1];
		}
		
	}
	if(abs(a[k][k]/s[k])<tol)
	{
		er=-1;
	}
}
void pivot(int n,double a[100][100],double s[100],int k){
	int jj,ii,p;
	double big,lumi;
	p=k;
	big=abs(a[k][k]);
	for(ii=k+1;ii<=n;ii++)
	{
		lumi=abs(a[ii][k]);
		if(lumi>big)
		{
			big=lumi;
			p=ii;
		}
	}
	if(p!=k)
	{
		for(jj=k;jj<=n;jj++)
		{
			lumi=a[p][jj];
			a[p][jj]=a[k][jj];
			a[k][jj]=lumi;
		}
		lumi=a[p][n+1];
		a[p][n+1] = a[k][n+1];
		a[k][n+1] = lumi;
	}
}
