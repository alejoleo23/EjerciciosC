#include <iostream>
void ingresodatos(int &,int &);
void reporte(int ,int);
using namespace std;

int main(int argc, char *argv[]) {
	int n,m;
	ingresodatos(n,m);
	reporte(n,m);
	return 0;
}

void ingresodatos(int &n,int &m){
	do{
		cout<<"Ingrese un numero entero positivo : ";
		cin>>n;
	} while(n<=0);
	do{
		cout<<"Ingrese la cantidad de valores que desea reportar : ";
		cin>>m;
	} while(m<=0);
	cout<<endl;
}

void reporte(int n,int m){
	int i,r;
	cout<<"Los "<<m<<" productos de "<<n<<" son :"<<endl;
	for(i=1;i<=m;i++)
	{
		r=i*n;
		cout<<n<<"*"<<i<<" = "<<r<<endl;
	}
}
