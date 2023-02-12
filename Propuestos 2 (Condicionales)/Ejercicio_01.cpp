#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b;
	cout<<"Ingrese el valor de A: ";
	cin>>a;
	cout<<"Ingrese el valor de B: ";
	cin>>b;
	if (a!=0 && a>b && a%b==0)
		cout<<"A es divisible por B"<<endl;
	else
		cout<<"A no es divisible por B"<<endl;
	system("pause");
	return 0;
}

