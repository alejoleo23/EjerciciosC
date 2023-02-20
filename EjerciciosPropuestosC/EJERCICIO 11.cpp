#include <iostream>
#include <string.h>
#define MAX 100
void ingresocadena(char *);
void reporte(char *);
using namespace std;

int main(int argc, char *argv[]) {
	char cad[MAX];
	ingresocadena(cad);
	reporte(cad);
	return 0;
}
void ingresocadena(char *cad){
	cout<<"Ingrese cadena:"<<endl;
	cin.getline(cad,MAX);
	cout<<endl;
}
void reporte(char *cad){
	int cv,i,ncad;
	ncad=strlen(cad);
	cv=0;
	for(i=0;i<ncad;i++)
	{
		if(*(cad+i)=='a' || *(cad+i)=='e' || *(cad+i)=='i' || *(cad+i)=='o' || *(cad+i)=='u' || *(cad+i)=='A' || *(cad+i)=='E' || *(cad+i)=='I' || *(cad+i)=='O' || *(cad+i)=='U')
			cv=cv+1;
	}
	cout<<"La cantidad de vocales que hay en la cadena es de: "<<cv<<endl;
}
