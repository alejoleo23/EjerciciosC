#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	float n;
	cout<<"Ingrese el promedio del estudiante:";
	cin>>n;
	if(n>=0 && n<=20){
		if (n>=17)
			cout<<"Es un estudiante es de categoria A"<<endl;
		else
			if (n>=14)
				cout<<"El estudiante es de cateria B"<<endl;
			else
				if (n>=12)
					cout<<"El estudiante es de categoria C"<<endl;
				else
					cout<<"El estudiante es de categoria D"<<endl;	
	}
	else
	   cout<<"Ingrese un promedio valido"<<endl;
	system("pause");
	return 0;
}

