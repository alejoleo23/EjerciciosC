#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	float c, t, i;
	cout<<"Ingrese el capital:";
	cin>>c;
	if (c<500)
		t=c*0.02;
	else
		if(c<1500)
			t=c*0.045;
		else
			t=c*0.09;
	i=t*c;
	cout<<"El interes es: "<<i<<endl;
	system("pause");
	return 0;
}

