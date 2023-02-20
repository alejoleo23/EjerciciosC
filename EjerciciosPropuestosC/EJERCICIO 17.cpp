#include <iostream>
using namespace std;
struct complejo{
	float real;
	float imag;
};
void ingresocomplejo(complejo *c1,complejo *c2);
complejo suma(complejo c1,complejo c2);
complejo resta(complejo c1,complejo c2);
void reporte(complejo s,complejo r);

int main(int argc, char *argv[]) {
	complejo c1,c2,r,s;
	ingresocomplejo(&c1,&c2);
	suma(c1,c2);
	resta(c1,c2);
	s=suma(c1,c2);
	r=resta(c1,c2);
	reporte(s,r);
	return 0;
}

void ingresocomplejo(complejo *c1,complejo *c2){
	cout<<"Ingrese Primer numero complejo "<<endl;
	cout<<"Parte real :";
	cin>>c1->real;
	cout<<"Parte imaginaria:";
	cin>>c1->imag;
	cout<<endl;
	cout<<"Ingrese Segundo numero complejo "<<endl;
	cout<<"Parte real :";
	cin>>c2->real;
	cout<<"Parte imaginaria:";
	cin>>c2->imag;
	cout<<endl;
}
complejo suma(complejo c1,complejo c2){
	complejo s;
	s->real=c1->real + c2->real;
	s->imag=c1->imag + c2->imag;
	return s;
}
complejo resta(complejo c1,complejo c2){
	complejo r;
	r->real=c1->real-c2->real;
	r->imag=c1->imag-c2->imag;
	return r;
}
void reporte(complejo s,complejo r){
	cout<<"La suma de los numeros complejos es:"<<endl;
	cout<<s->real;
	if(s->imag>0)
		cout<<"+";
	cout<<s->imag<<"i"<<endl;
	cout<<endl;
	cout<<"La resta de los numeros complejos es:"<<endl;
	cout<<r->real;
	if(r->imag>0)
		cout<<"+";
	cout<<r->imag<<"i"<<endl;
}
