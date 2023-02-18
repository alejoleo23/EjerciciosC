#include <iostream>
void ingresovector(int n,double vx[],double vy[]);
double polnewton(int n,double x,double vx[],double vy[]);
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	double vx[50],vy[50],x,y;
	do
		{
		cout<<"Ingrese n° de datos:";
		cin>>n;
	} while(n<=0);
	ingresovector(n,vx,vy);
	cout<<"Ingrese valor x que desea calcular:";
	cin>>x;
	y=polnewton(n,x,vx,vy);
	cout<<"El valor es :"<<y<<endl;
	
	return 0;
}
void ingresovector(int n,double vx[],double vy[]){
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"x"<<i<<"=";
		cin>>vx[i];
		cout<<"y"<<i<<"=";
		cin>>vy[i];
		cout<<endl;
	}
}
double polnewton(int n,double x,double vx[],double vy[]){
	int i,j;
	double m[50][50];
	for(i=0;i<n;i++)//inicia tabla diferencias
		m[i][0]=vy[i];
	for(j=1;j<n;j++)
	{
		
		for(i=0;i<n-j;i++)
			m[i][j]=(m[i+1][j-1] - m[i][j-1])/(vx[i+j] - vx[i]);
	}
	
	double xt=1,y;
	y=m[0][0];
	for(j=0;j<n-1;j++)
	{
		xt=xt*(x-vx[j]);
		y=y+m[0][j+1]*xt;
	}
	return y;
}
	
