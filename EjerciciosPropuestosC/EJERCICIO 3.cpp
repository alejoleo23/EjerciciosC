#include <iostream>
using namespace std;
void ingresofecha(int *,int *);
void reportedias(int ,int );

int main(int argc, char *argv[]) {
	int m,a;
	ingresofecha(&m,&a);
	reportedias(m,a);
	return 0;
}

void ingresofecha(int *m,int *a){
	do
	{	
		cout<<"Ingrese mes:";
		cin>>*m;
	}
	while(*m<=0 or *m>=13);
	do
	{	
		cout<<"Ingrese año:";
		cin>>*a;
	}
	while(a<0);
}

void reportedias(int m,int a){
	switch(m)
	{
	case 1:case 3:case 5:case 7:case 8:case 10: case 12:
		cout<<"El mes tiene 31 dias."<<endl;
		break;
	case 4:case 6:case 9: case 11:
		cout<<"El mes tiene 30 dias."<<endl;
		break;
	case 2:
		if((a%4==0 and a%100!=0)or a%400==0)
			cout<<"El mes tiene 29 dias."<<endl;
		else
			cout<<"El mes tiene 28 dias."<<endl;
		break;
	}
}
