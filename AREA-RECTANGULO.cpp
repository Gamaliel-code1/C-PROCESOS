#include<iostream>
using namespace std;

int main(){
	int a, b, area;
	
	cout<<"ingresa el valor de a: "<<endl;
	cin>>a;
	cout<<"ingresa el valor de b: "<<endl;
	cin>>b;
	if (a>0 and b>0){
		area=a*b;
	} else {
		cout<<"Ninguno de los valores pueder ser 0 o negativo"<<endl;
	}
	cout<<"El resultado del area es: "<<area;
	return 0;
}
