#include <iostream>
#include <math.h>
void ingreso(int &);
void modelo(int );
void ingresomatriz(int ,double [100][100]);
void mostrarvector(int ,double [100]);
void mostrarmatriz(int ,double [100][100]);
void gausseidel(int ,double [100][100],double [100]);
void muestraprimera(int ,double [100][100]);
bool convergencia(int ,double [100][100]);

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
		cout<<"ES CONVERGENTE"<<endl;
	else
		cout<<"NO ES CONVERGENTE"<<endl;
	gausseidel(n,a,x);
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
bool convergencia(int n,double a[100][100]){
	int i,j,band=0;
	double s;
	for(i=1;i<=n;i++)
	{
		s=0;
		for(j=1;j<=n;j++)
		{
			if(i!=j)
				s=s + abs(a[i][j]);
		}
		if(abs(a[i][i]) < s )
		{
			band = 1;
			i=n+1;
		}
	}
	if(band == 0)
		return true;
	else
		return false;
}

void mostrarvector(int n,double x[100]){
	int i;
	cout<<"EL VECTOR ES:"<<endl;
	for(i=1;i<=n;i++)
		cout<<"x"<<i<<" = "<<x[i]<<endl;
}
void gausseidel(int n,double a[100][100],double x[100]){
	double s1,s2,er=9999,tol=0.01,se;
	int i,j,k,it=1;
	while(it<4)// MAXIMA VECES PARA ITERAR O EN CASO CONTRARIO PONER TOLERANCIA
	{
		cout<<" ITERACION "<<it<<endl;
		cout<<endl;
		for(k=1;k<=n;k++)
		{	
			s1=0;
			s2=0;
			for(j=1;j<=k-1;j++)
			{
				if(k!=j)
					s1=s1 + a[k][j]*x[j];
			}
			for(j=k+1;j<=n;j++)
			{
				if(k!=j)
					s2=s2 + a[k][j]*x[j];
			}
			
			x[k]=(a[k][n+1] - s1 - s2)/a[k][k];// YA SE GUARDA LOS VALORES PRIMEROS
		}
		for(i=1;i<=n;i++)//IMPRIME LOS VALORES XN DE ESA ITERACION
		{
			cout<<"x"<<i<<"= "<<x[i]<<endl;
		}
		se=0;
		for(i=1;i<=n;i++)//SACA SUMA CUADRADOS DE LOS XN PRIMEROS
		{
			se= se + pow(x[i],2);
		}
		er=sqrt(se);// SACA ERROR SACANDO LA RAIZ DE LA SUMA DE LOS XN ELEVADOS AL CUADRADO 
		cout<<endl;
		cout<<"error = "<<er<<endl;
		cout<<endl;
		it=it+1;
		
	}
}


