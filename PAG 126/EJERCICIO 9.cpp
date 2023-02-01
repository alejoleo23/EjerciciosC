#include <iostream>
#include <string.h>
void ingresocadena(char []);
void contcarac(char [],int []);
void reporte(int []);
using namespace std;

int main(int argc, char *argv[]) {
	char cad[100];
	int v[27];
	ingresocadena(cad);
	contcarac(cad,v);
	reporte(v);
	return 0;
}

void ingresocadena(char cad[100]){
	cout<<"Ingrese una frase : ";
	cin.getline(cad,100);
	cout<<endl;
}

void contcarac(char cad[100], int valfab[27]){
	int i,n;
	n = strlen(cad);
	for(i=0;i<27;i++)
		valfab[i]=0;
	for(i=0;i<n;i++)
	{
		if(cad[i]=='a' || cad[i]=='A')
			valfab[0]++;
		if(cad[i]=='b' || cad[i]=='B')
			valfab[1]++;
		if(cad[i]=='c' || cad[i]=='C')
			valfab[2]++;
		if(cad[i]=='d' || cad[i]=='D')
			valfab[3]++;
		if(cad[i]=='e' || cad[i]=='E')
			valfab[4]++;
		if(cad[i]=='f' || cad[i]=='F')
			valfab[5]++;
		if(cad[i]=='g' || cad[i]=='G')
			valfab[6]++;
		if(cad[i]=='h' || cad[i]=='H')
			valfab[7]++;
		if(cad[i]=='i' || cad[i]=='I')
			valfab[8]++;
		if(cad[i]=='j' || cad[i]=='J')
			valfab[9]++;
		if(cad[i]=='k' || cad[i]=='K')
			valfab[10]++;
		if(cad[i]=='l' || cad[i]=='L')
			valfab[11]++;
		if(cad[i]=='m' || cad[i]=='M')
			valfab[12]++;
		if(cad[i]=='n' || cad[i]=='N')
			valfab[13]++;
		if(cad[i]=='o' || cad[i]=='O')
			valfab[14]++;
		if(cad[i]=='p' || cad[i]=='P')
			valfab[15]++;
		if(cad[i]=='q' || cad[i]=='Q')
			valfab[16]++;
		if(cad[i]=='r' || cad[i]=='R')
			valfab[17]++;
		if(cad[i]=='s' || cad[i]=='S')
			valfab[18]++;
		if(cad[i]=='t' || cad[i]=='T')
			valfab[19]++;
		if(cad[i]=='u' || cad[i]=='U')
			valfab[20]++;
		if(cad[i]=='v' || cad[i]=='V')
			valfab[21]++;
		if(cad[i]=='w' || cad[i]=='W')
			valfab[22]++;
		if(cad[i]=='x' || cad[i]=='X')
			valfab[23]++;
		if(cad[i]=='y' || cad[i]=='Y')
			valfab[24]++;
		if(cad[i]=='z' || cad[i]=='Z')
			valfab[25]++;
		if(cad[i]=='ñ' || cad[i]=='Ñ')
			valfab[26]++;
	}
}

void reporte(int valfab[27]){
	int i;
	cout<<" Numero de veces que se usa cada letra en la frase. "<<endl;
	char al[28]={"abcdefghijklmnopqrstuvwxyzñ"};
	for(i=0;i<27;i++)
	{
		if(valfab[i]==0)
			cout<<"La cadena Contiene ninguna "<<al[i]<<"."<<endl;
		else
			cout<<"La cadena contiene "<<valfab[i]<<" "<<al[i]<<"."<<endl;
	}
}
