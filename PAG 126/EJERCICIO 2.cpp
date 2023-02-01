#include <iostream>
void ingresotecla(char &);
bool confirma(char );
using namespace std;

int main(int argc, char *argv[]) {
	char t;
	do
	{
		ingresotecla(t);
		if(confirma(t))
			cout<<"Felicidades acertaste."<<endl;
		else
			cout<<"Lo sentimos, sigue intentando."<<endl;
		cout<<endl;
	} while(confirma(t)==false);
	return 0;
}

void ingresotecla(char &tecla){
	cout<<"Digite una tecla :";
	cin>>tecla;
	cout<<endl;
}

bool confirma(char tecla){
	char teclaclave = 'm'; // definir tecla clave, puede ser cualquiera
	if(tecla == teclaclave)
		return true;
	else
		return false;
}
