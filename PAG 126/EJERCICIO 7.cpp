#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char cad[11]="SAIDSONEUB";
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=i;j>=0;j--)
			cout<<cad[j];
		cout<<endl;
	}
	return 0;
}

