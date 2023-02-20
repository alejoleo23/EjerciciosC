#include <iostream>
#include <cmath>
void ingresodatos(float *,float *);
float calculohipotenusa(float ,float );
float calculoarea(float ,float );
float calculoperimetro(float ,float );
void reporte(float ,float ,float );
using namespace std;

int main(int argc, char *argv[]) {
	float ca,co,h,area,p;
	ingresodatos(&ca,&co);
	calculohipotenusa(ca,co);
	calculoarea(ca,co);
	calculoperimetro(ca,co);
	h=calculohipotenusa(ca,co);
	area=calculoarea(ca,co);
	p=calculoperimetro(ca,co);
	reporte(h,area,p);
	return 0;
}
void ingresodatos(float *ca,float *co){
	do
	{
		cout<<"Ingrese dato del cateto adyacente:";
		cin>>*ca;
	} while(*ca<=0);
	cout<<endl;
	do
	{
		cout<<"Ingreso dato del cateto opuesto:";
		cin>>*co;
	} while(*co<=0);
	cout<<endl;
}
float calculohipotenusa(float ca,float co){
	float h;
	h=sqrt(pow(ca,2)+pow(co,2));
	return h;
}
float calculoarea(float ca,float co){
	float area;
	area=(ca*co)/2;
	return area;
}
float calculoperimetro(float ca,float co){
	float p;
	p=co+ca+sqrt(pow(ca,2)+pow(co,2));
	return p; 
}
void reporte(float h,float area,float p){
	cout<<"La hipotenusa es : "<<h<<endl;
	cout<<"El area es: "<<area<<endl;
	cout<<"El perimetro es: "<<p<<endl;
}
