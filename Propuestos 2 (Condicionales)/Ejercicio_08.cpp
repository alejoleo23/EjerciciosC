#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
	int m,a;
	cout<<"Ingrese numero de mes(1 al 12):";
	cin>>m;
	cout<<"Ingrese el año:";
	cin>>a;
	if(m==2)
		if((m==2) && ((a%4==0 && a%100!=0)|| (a%400==0)))
			cout<<"Tiene 29 dias"<<endl;
		else
			cout<<"Tiene 28 dias"<<endl;
	if(m==4 || m==6 || m==9 || m==11)
		cout<<"Tiene 30 dias"<<endl;
	else
		if(m!=2)
		cout<<"Tiene 31 dias"<<endl;
	system("pause");
	return 0;
}

