#include <iostream>
#include <iomanip> // setprecision
#include <cmath>

#define PRECISION 4

using namespace std;

double f(double x);
void imprimePuntos(double a, double b);

int main()
{
	setprecision(PRECISION);//Numero de decimales a utilizar
	double a, b, tolerancia;
	cout << "\nCalculo de las raices de una funcion aplicando el metodo de la biseccion" << endl;
	cout << "\nIngrese el intervalo inicial [a, b]" << endl;
	cout << "\na = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	
	
	if (f(a) * f(b) > 0) {
		
		cout << "\nNo se puede aplicar el metodo de la biseccion\n";
		cout << "porque f(" << a << ") y f(" << b << ") tienen el mismo signo" << endl;
		
	} else {
		imprimePuntos(a, b);
		
		cout << "\nEscoja el intervalo adecuado" << endl;
		cout << "\na = ";
		cin >> a;
		
		cout << "b = ";
		cin >> b;
		
		// [a, b]
		float xr; // raiz de la función
		
		/*
		cout << "\nf(" << a << ") = " << f(a) << endl;
		cout << "f(" << b << ") = " << f(b) << endl;
		*/
		cout << "Tolerancia = ";
		cin >> tolerancia;
		cout << "\na\tb\tx\tf(a)\t\tf(b)\t\tf(x)\n" << endl;
		
		while(abs(f(xr)) <= tolerancia)
		{
			double aux;
			aux=xr;
			xr = (a + b) / 2.0;
			cout << a << "\t" << b << "\t" << xr << "\t";
			cout << f(a) << "\t" << f(b) << "\t" << f(xr) << endl;
			if(f(a)*f(b)<0)
				b=xr;
			else if(f(a)*f(b)>0)
				a=xr;
			else
				cout<<"la raiz es:"<<xr<<" con una tolerancia de "<<tolerancia<<endl;
			
			
			
		}
	}
	return 0;
}


double f(double x) 
{
	return x+5;
}

#define INTERVALOS 10
void imprimePuntos(double a, double b)
{
	int puntos = INTERVALOS + 1;
	
	double ancho = (b - a) / INTERVALOS;
	
	cout << "\n";
	cout << "\tx\tf(x)\n" << endl;
	for (int i = 0; i < puntos; i++) {
		cout << "\t" << a << "\t" << f(a) << endl;
		a = a + ancho;
	}
}
