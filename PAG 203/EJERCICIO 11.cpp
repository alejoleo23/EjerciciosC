#include <iostream>
#include <string.h>
void menu(int &);
void tabla();
void ingresocadena(char []);
void traduce1(char [],char [36][6],char [37]);
void traduce2(char [],char [36][6],char [37]);
using namespace std;

int main(int argc, char *argv[]) {
	char cad[100];
	char m[36][6] = {{".-"},{"-..."},{"-.-."},{"-.."},{"."},{"..-."},{"--."},{"...."},{".."},{".---"},{"-.-"},{".-.."},
	{"--"},{"-."},{"---"},{".--."},{"--.-"},{".-."},{"..."},{"-"},{"..-"},{"...-"},{".--"},{"-..-"},{"-.--"},{"--.."},
	{".----"},{"..---"},{"...--"},{"....-"},{"....."},{"-...."},{"--..."},{"---.."},{"----."},{"-----"},};
	char l[37]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R',
		'S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0'};
	int n;
	menu(n);
	if(n==1)
	{
		cout<<"Ingrese una texto con caracteres alfanumericos en mayuscula(ejemplo:AB CD 123A) : ";
		ingresocadena(cad);
		traduce1(cad,m,l);
	}
	if(n==2)
	{	
		cout<<"Ingrese codigo morse a traducir dejando un espacio (ejemplo:.- -... ...) : ";
		ingresocadena(cad);
		traduce2(cad,m,l);
	}
	return 0;
}

void traduce1(char cad[],char m[36][6],char l[37]){
	int i,j;
	int n = strlen(cad);
	for(i=0;i<n;i++)
	{
		for(j=0;j<36;j++)
		{
			if(cad[i]==l[j])
				cout<<m[j]<<" ";
		}
	}
}

void traduce2(char cad[],char m[36][6],char l[37]){
	int i,j=0,t=0,f,k=0,kk,kkk;
	char aux[10];
	bool letraaletra=true;
	int n;
	while(cad[j]!='\0')
	{
		if(cad[j]==' ')
		{
			aux[t]='\0';t=0;letraaletra=false;kk=strlen(aux);
		}
		else
		{
			aux[t]=cad[j];t++;
			if(cad[j+1]=='\0')
			{
				aux[t]='\0';t=0;letraaletra=false;kk=strlen(aux);
			}
		}
		if(letraaletra==false)
		{
			for(i=0;i<36;i++)
			{
				k=0;kkk=0;
				n=strlen(m[i]);
				if(kk==n)
				{
					while(aux[k]!='\0')
					{
						if(aux[k]==m[i][k])
						{
							kkk++;
						}
						k++;
					}
					if(kkk==kk)
					{
						f=i;cout<<l[f]<<"   ";letraaletra=true;i=40;
					}
				}
			}

		}
		j++;
	}
}

void ingresocadena(char cad[100]){
	cin.get();
	cin.getline(cad,100);
	cout<<endl;
}


void menu(int &n){
	cout<<"Elija opcion : "<<endl;
	cout<<"1) traducir texto a codigo morse."<<endl;
	cout<<"2) traducir codigo morse a texto."<<endl;
	do
		{
		cout<<"Ingrese opcion : ";
		cin>>n;
	} while(n!=1 && n!=2);
	cout<<endl;
}

