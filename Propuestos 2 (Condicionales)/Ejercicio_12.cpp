#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int t,t2,tr,h,m,s,h2,m2,s2,H,M,S;
	cout<<"Ingrese HH:MM:SS";
	cin>>h>>m>>s;
	if (h==00 && m==00 && s==00)
		{
		h=23; 
		m=59; 
		s=59;
		cout<<"La hora es: "<<h<<":"<<m<<":"<<s<<endl;
		}
	else
		if (h<=23 && m<=59 && s<=59)
		{
		t=(h*3600)+(m*60)+s;
		tr=t-1;
		h2=tr/3600;
		tr=tr%3600;
		m2=tr/60;
		tr=tr%60;
		s2=tr%60;
		s2=tr;
		cout << "La n hora es: "<<h2<<":"<<m2<<":"<<s2<<endl; 
		}
		else
		cout <<"Ingrese una hora correcta"<<endl;
	system("PAUSE");
	return 0;
}

