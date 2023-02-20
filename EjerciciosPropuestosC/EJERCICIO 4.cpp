#include <iostream>
using namespace std;
void ingreso(float *,float *,float *,float *);
void calculo(float,float,float,float,float *,float *);
void reporte(float,float);

int main(int argc, char *argv[]) {
	float n1,n2,n3,n4,menor,prom;
	ingreso(&n1,&n2,&n3,&n4);
	calculo(n1,n2,n3,n4,&menor,&prom);
	reporte(menor,prom);
	return 0;
}
void ingreso(float *n1,float *n2,float *n3,float *n4){
	do
	{
		cout<<"Ingrese primer nota:";
		cin>>*n1;
	} while(*n1<0 or *n1>20);
	do
	{
		cout<<"Ingrese segunda nota:";
		cin>>*n2;
	} while(*n2<0 or *n2>20);
	do
	{
		cout<<"Ingrese tercera nota:";
		cin>>*n3;
	} while(*n3<0 or *n3>20);
	do
	{
		cout<<"Ingrese cuarta nota:";
		cin>>*n4;
	} while(*n4<0 or *n4>20);
}
void calculo(float n1,float n2,float n3,float n4,float *menor,float *prom){
	*menor=n1;
	if(n2<*menor)
		*menor=n2;
	if(n3<*menor)
		*menor=n3;
	if(n4<*menor)
		*menor=n4;
	*prom=(n1+n2+n3+n4-*menor)/3;
}
void reporte(float menor,float prom){
	cout<<"La menor nota eliminada es:"<<menor<<endl;
	cout<<"El promedio es de:"<<prom<<endl;
}
