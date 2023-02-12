#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	char letra;
	cout<<"Ingrese una letra minuscula: ";
	cin>>letra;
	if(letra>='a' && letra<='z')
	{
		if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
		cout<<"Es una vocal"<<endl;
		else
			if(letra=='y')
				cout<<"Es una semivocal"<<endl;
			else
				cout<<"Es una consonante"<<endl;
	}
	else
	   cout<<"No es una letra minuscula"<<endl;
	system("pause");
	return 0;
}

