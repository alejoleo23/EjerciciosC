#include <iostream>
void ingresocadena(char []);
void permuta(char []);
using namespace std;

int main(int argc, char *argv[]) {
	char cad[5];
	ingresocadena(cad);
	permuta(cad);
	return 0;
}

void ingresocadena(char cad[5]){
	cout<<"Ingrese una cadena de 4 caracteres que no se repitan : ";
	cin.getline(cad,5);
	cout<<endl;
}

void permuta(char cad[5]){
	cout<<"Todas las palabras posiblemente formadas son : "<<endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				for (int l = 0; l < 4; l++) {
					if(cad[i]!=cad[j] && cad[i]!=cad[k] && cad[i]!=cad[l] &&
					   cad[j]!=cad[k] && cad[j]!=cad[l] && 
					   cad[k]!=cad[l])
					cout<<"posibilidad : "<<cad[i]<<cad[j]<<cad[k]<<cad[l]<<endl;
				}
			}
		}
	}
}
