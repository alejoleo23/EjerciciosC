#include <iostream>
#include <cmath>
using namespace std;
struct punto{
	float x;
	float y;
};
void ingresopunto(punto *p1,punto *p2);
float distancia(punto p1,punto p2);
void reporte(float d);

int main(int argc, char *argv[]) {
	punto p1,p2;
	float d;
	ingresopunto(&p1,&p2);
	distancia(p1,p2);
	d=distancia(p1,p2);
	reporte(d);
	return 0;
}
void ingresopunto(punto *p1,punto *p2){
	cout<<"Ingrese Primer punto"<<endl;
	cout<<"Valor de x :";
	cin>>p1->x;
	cout<<"Valor de y :";
	cin>>p1->y;
	cout<<endl;
	cout<<"Ingrese Segundo punto"<<endl;
	cout<<"Valor de x :";
	cin>>p2->x;
	cout<<"Valor de y :";
	cin>>p2->y;
	cout<<endl;
}
float distancia(punto p1,punto p2){
	float d;
	d=sqrt(pow(p2->x-p1->x,2)+pow(p2->y-p1->y,2));
	return d;
}

void reporte(float d){
	cout<<"La distancia entre los dos puntos es :"<<d<<endl;
}
