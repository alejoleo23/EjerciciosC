#include <iostream>
#include <math.h>
using namespace std;
void ingreso(int *);
void reporteinverso(int );

int main(int argc, char *argv[]) {
	int num;
	ingreso(&num);
	reporteinverso(num);
	return 0;
}
void ingreso(int *num){
	do
	{
		cout<<"Ingrese numero:";
		cin>>*num;
	} while(num<=0);
}
void reporteinverso(int num){
	int c=0,n2,d;
	n2=num;
	while(num!=0)
	{	num=num/10;
		c=c+1;
	}
	num=n2;
	n2=0;
	while(num!=0)
	{
		d=num%10;
		c=c-1;
		n2=n2+d*pow(10,c);
		num=num/10;
	}
	n2=n2+1;
	cout<<"El inverso del numero es:"<<n2<<endl;
}
