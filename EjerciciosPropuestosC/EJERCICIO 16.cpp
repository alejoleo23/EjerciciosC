#include <iostream>
void ordenmatriz(int *);
void ingresomatriz(int ,float *m);
void reportematriz(int ,float *m);
float sumadiagonal(int ,float *m);
void reportesuma(float );
using namespace std;

int main(int argc, char *argv[]) {
	float m[100][100],sdp;
	int n;
	ordenmatriz(&n);
	ingresomatriz(n,&m[0][0]);
	reportematriz(n,&m[0][0]);
	sumadiagonal(n,&m[0][0]);
	sdp=sumadiagonal(n,&m[0][0]);
	reportesuma(sdp);
	return 0;
}

void ordenmatriz(int *n){
	do
	{
		cout<<"Ingrese el orden de la matriz:";
		cin>>*n;
	} while(*n<=0 || *n>100);
	cout<<endl;
}
void ingresomatriz(int n,float *m){
	int i,j;
	cout<<"Ingrese los datos de la matriz"<<endl;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"M["<<i<<"]["<<j<<"]=";
			cin>>*(m+n*i+j);
		}
		cout<<endl;
	}
}
void reportematriz(int n,float *m){
	int i,j;
	cout<<"La matriz ingresada :"<<endl;
	cout<<endl;
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n;j++)
			cout<<*(m+n*i+j)<<"\t";
		cout<<endl;
	}
	cout<<endl;
}
float sumadiagonal(int n,float *m){
	int i,j;
	float sdp=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(i==j)
				sdp=sdp + *(m+n*i+j);
	}
	return sdp;
}
void reportesuma(float sdp){
	cout<<"La suma de los elementos de la diagonal principal es: "<<sdp<<endl;
}
