#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num,aux,x=1;
	do
		{
		cout<<"Ingrese un numero entero mayor o igual a cero: ";
		cin>>num;
	} while(num<0);
	aux=num;
	while(num>0)
	{
		x=x*num;
		num--;
	}
	cout<<" el factorial de "<<aux<<" es "<<x<<endl;
	return 0;
}

