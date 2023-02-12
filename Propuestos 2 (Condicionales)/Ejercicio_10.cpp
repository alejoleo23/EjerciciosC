#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float x,fx;
	cout<<"El valor de la constante x es:";
	cin>>x;
	if (x<0)
		fx=(pow(x,3))+(x/2);
	else
		fx=(4*pow(x,2))-2;
	cout<<"El valor de la funcion es:"<<fx<<endl;
	system("pause");
	return 0;
}

