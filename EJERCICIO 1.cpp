#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b;
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	if(b!=0)
	{
		if(a%b==0)
			cout<<"el numero "<<a<<" es divisible por "<<b<<" "<<endl;
	}
	else if(a!=0)
	{
	if(b%a==0)
		cout<<"el numero "<<b<<" es divisible por "<<a<<" "<<endl;
	}
	else
			cout<<"no se cumple la condicion"<<endl;

	return 0;
}

