#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	float n1, n2, prom;
	cout<<"Ingrese las primera nota del alumno: ";
	cin>>n1;
	cout<<"Ingrese la segundo nota del alumno: ";
	cin>>n2;
	prom=(n1+n2)/2;
	if (prom>=10,5)
		cout<<"Aprobado!"<<endl;
	else
		cout<<"Desaprobado"<<endl;
	system("pause");
	return 0;
}

