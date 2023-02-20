#include <iostream>
using namespace std;
void ingreso(int *);
void calculo(int ,int *,int *,int *);
void reportetnuevo(int ,int ,int );


int main(int argc, char *argv[]) {
	int t,hrs,m,seg;
	ingreso(&t);
	calculo(t,&hrs,&m,&seg);
	reportetnuevo(hrs,m,seg);
	return 0;
}
void ingreso(int *t){
	do
	{
		cout<<"Ingrese tiempo en segundos:";
		cin>>*t;	
	} while(t<=0);
}
void calculo(int t,int *hrs,int *m,int *seg){
	*hrs=t/3600;
	t=t%3600;
	*m=t/60;
	*seg=t%60;
}
void reportetnuevo(int hrs,int m,int seg){
	cout<<"El tiempo ingresado equivale a "<<hrs<<" Horas, "<<m<<" Minutos y "<<seg<<" Segundos."<<endl;
}
