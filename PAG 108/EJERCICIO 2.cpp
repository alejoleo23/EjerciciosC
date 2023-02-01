#include <iostream>
void ingresadatos(int []);
bool confirma(int []);
int mayor(int []);
using namespace std;

int main(int argc, char *argv[]) {
	int v[10],may;
	ingresadatos(v);
	if(confirma(v))
	{
		may=mayor(v);
		cout<<"El elemento par mayor es : "<<may<<endl;
	}
	else
		cout<<"El vector no tiene al menos un elemento par."<<endl;
	return 0;
}



void ingresadatos(int v[10]){
	int i;
	cout<<"Ingresa datos de los elementos del vector :"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"v["<<i<<"]= ";
		cin>>v[i];
	}
	cout<<endl;
}
bool confirma(int v[10]){
	bool hp=false;
	int i;
	for(i=0;i<10;i++)
	{
		if(v[i]%2==0)
			hp=true;
	}
	return hp;
}

int mayor(int v[10]){
	int i,may;
	may=2;
	for(i=1;i<10;i++)
	{
		if(v[i]%2 == 0 && v[i]>may)
			may = v[i];
	}
	return may;
}
