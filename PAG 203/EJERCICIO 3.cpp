#include <iostream>
void ingresodatos(int &,int &, int &);
int sumatoria(int );
int mayor(int ,int ,int);
int factorial(int );
bool comprueba(int ,int ,int );

using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c,may,smay,sa,sb,f3;
	double resultado;
	ingresodatos(a,b,c);
	if(comprueba(a,b,c))
	{
		may = mayor(a,b,c);
		smay = sumatoria(may);
		cout<<"La suma acumulativa de los numeros naturales hasta el numero "<<may<<" es : "<<smay<<endl;
	}
	else
	{
		f3 = factorial(c);
		sa = sumatoria(a);
		sb = sumatoria(b);
		resultado = (sa*sb)/f3;
		cout<<"La suma acumulativa de los numeros naturales hasta el primer dato "<<a<<" es : "<<sa<<endl;
		cout<<"La suma acumulativa de los numeros naturales hasta el segundo dato "<<b<<" es : "<<sb<<endl;
		cout<<"El resultado del producto de las sumatorias dividido entre el factorial del tercer dato es : "<<resultado<<endl;
	}
	return 0;
}

void ingresodatos(int &a,int &b,int &c){
	cout<<"Ingrese el primer dato :";
	cin>>a;
	cout<<"Ingrese segundo dato :";
	cin>>b;
	cout<<"Ingrese tercerdato :";
	cin>>c;
	cout<<endl;
}

int mayor(int a,int b,int c){
	if(a>b && a>c)
		return a;
	else if(b>a && b>c)
		return b;
	else
		return c;
}
bool comprueba(int a,int b,int c){
	if(a%3==0 || b%3==0 || c%3==0)
		return true;
	else
		return false;
}
int sumatoria(int num){
	int i,s=0;
	for(i=1;i<=num;i++)
		s = s + i;
	return s;	
}
int factorial(int num){
	int i,f=1;
	for(i=1;i<=num;i++)
		f=f*i;
	return f;
}
