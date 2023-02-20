#include <iostream>
using namespace std;
void ingresofecha(int *,int *,int *);
void calculofecha(int *,int *,int *);
void reportefecha(int ,int ,int);

int main(int argc, char *argv[]) {
	int d,m,a;
	ingresofecha(&d,&m,&a);
	calculofecha(&d,&m,&a);
	reportefecha(d,m,a);
	return 0;
}

void ingresofecha(int *d,int *m,int *a){
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
	while(*a<0);
	if(*m==2)
	{
		if((*a%4==0 && *a%100!=0)or *a%400==0)
		{
			do
			{
				cout<<"Ingrese dia:";
				cin>>*d;
			} while(*d<=0 || *d>29);
			
		}
		else
		{
			do
			{
				cout<<"Ingrese dia:";
				cin>>*d;
			} while(*d<=0 || *d>28);
		}
	}
	else
	{   
		if(*m==1 || *m==3 || *m==5 || *m==7 || *m==8 || *m==10 || *m==12)
		{
			do
			{
				cout<<"Ingrese dia:";
				cin>>*d;
			} while(*d<=0 || *d>31);
		}
		else
			if(*m==4 || *m==6 || *m==9 || *m==11)
			{
				do
				{
					cout<<"Ingrese dia:";
					cin>>*d;
				} while(*d<=0 || *d>30);
			}
	}		
	cout<<endl;
}

void calculofecha(int *d,int *m,int *a){
	*d=*d+1;
	if(*m==2)
	{
		if((*a%4==0 && *a%100!=0) || *a%400==0)
		{
			if(*d==30)
			{	*d=1;
				*m=*m+1;
			}	
		}
		else
		{
			if(*d==29)
			{	
				*d=1;
				*m=*m+1;
			}	
		}
	}
	else
	   if(*m==1 || *m==3 || *m==5 || *m==7 || *m==8 || *m==10 || *m==12)
		{
			if(*d==32)
			{
				*d=1;
				*m=*m+1;
				if(*m==13)
				{
					*m=1;
					*a=*a+1;
				}
			}
		}	
		else
			if(*m==4 || *m==6 || *m==9 || *m==11)
			{
				if(*d==31)
				{
					*d=1;
					*m=*m+1;
				}
			}
}
void reportefecha(int d,int m,int a){
	cout<<"El dia siguiente es: "<<d<<" del Mes "<<m<<", Año "<<a<<"."<<endl;
}
