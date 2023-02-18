#include <iostream>
#include <math.h>
void ingreso(int &);
void modelo(int );
void ingresomatriz(int ,double [100][100]);
void mostrarvector(int ,double [100]);
void mostrarmatriz(int ,double [100][100]);
bool convergencia(int n,double a[100][100]);
void muestraprimera(int ,double [100][100]);
void jacobi(int ,double [100][100],double [100]);
using namespace std;

int main(int argc, char *argv[]) {
	double a[100][100],x[100];
	int n;
	ingreso(n);
	modelo(n);
	ingresomatriz(n,a);
	mostrarmatriz(n,a);
	muestraprimera(n,a);
	if(convergencia(n,a))
		cout<<"DIAGONAL DOMINANTE, CONVERGE"<<endl;
	else
		cout<<"NO ES DIAGONAL DOMINANTE, DIVERGE"<<endl;
	jacobi(n,a,x);
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
bool convergencia(int n,double a[100][100]){
	int i,j,band=0;
	double sf,sc;
	for(i=1;i<=n;i++)
	{
		sf=0;
		sc=0;
		for(j=1;j<=n;j++)
		{
			if(i!=j)
			{
				sf= sf + abs(a[i][j]);
				sc=sc + abs(a[j][i]);
			}
		}
		if(abs(a[i][i])>sf && abs(a[i][i])>sc)
		{
			band=0;
		}
		else
		{
			band=1;
			i=n+1;
		}
	}
	if(band==0)
		return true;
	else
		return false;
}
void muestraprimera(int n,double a[100][100]){
	int i,j;
	cout<<"DESPEJANDO INCOGNITAS "<<endl;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"x"<<i<<"= "<<"("<<a[i][n+1]<<")"<<" + ";
		for(j=2;j<=n;j++)
		{
			if(j==n)
				cout<<"("<<(-1)*a[i][j]<<")x"<<j;
			else
				cout<<"("<<(-1)*a[i][j]<<")x"<<j<<" + ";
		}
		cout<<endl;
		cout<<"   _______________________________________"<<endl;
		cout<<"			"<<a[i][i]<<endl;
		cout<<endl;
	}
	cout<<endl;
}
void jacobi(int n,double a[100][100],double x[100]){
	double s,er=9999,tol=0.01,se,xant[100];
	int i,j,k,it=1;
	cout<<endl;
	
	//INICIALIZO CON CERO LOS PRIMEROS VALORES DE LAS VARIABLES
	for(i=1;i<=n;i++)
		xant[i]=x[0];
	
	while(it<6)// MAXIMAS VECES PARA ITERAR O EN CASO CONTRARIO PONER TOLERANCIA
	{
		cout<<" ITERACION "<<it<<endl;
		cout<<endl;
		for(k=1;k<=n;k++)
		{	
			
			s=0;
			//SACA SUMA CUADRADOS DE LOS XN PRIMEROS
			se=0;
			for(i=1;i<=n;i++)
			{
				se= se + pow(xant[i]-x[i],2);
			}
			er=sqrt(se);// SACA ERROR SACANDO LA RAIZ DE LA SUMA DE LOS XN ELEVADOS AL CUADRADO 
			
			for(j=1;j<=n;j++)
			{
				if(k!=j)
					s=s + a[k][j]*xant[j];
			}
			x[k]=(a[k][n+1] - s)/a[k][k];// YA SE GUARDA LOS VALORES PRIMEROS
		}
		//ACTUALIZANDO VALORES
		for(i=1;i<=n;i++)
		{
			xant[i]=x[i];
		}
		
		//IMPRIME LOS VALORES XN DE ESA ITERACION
		for(i=1;i<=n;i++)
		{
			cout<<"x"<<i<<"= "<<xant[i]<<endl;
		}
		it=it+1;
		cout<<endl;
		cout<<"error = "<<er<<endl;
		cout<<endl;
	}
}
