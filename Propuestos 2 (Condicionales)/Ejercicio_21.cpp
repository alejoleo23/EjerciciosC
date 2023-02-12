#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int mt, p, b;
	cout<<"Ingrese el monto total:";
	cin>>mt;
	if (mt<5000)
		p=(float) 0.10*mt;
	else{
		b=((mt/500)-10)*25;
		p=(0.10*mt)+b;}
	cout<<"El pago del empleado es:"<<p<<endl;
	system("PAUSE");
	return 0;
}

