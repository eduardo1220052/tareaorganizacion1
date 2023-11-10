#include <iostream>
using namespace std;
int main(){
	int edades []={ 18, 20, 24, 28, 30, 32};
	int *ptcr;
	ptcr = edades;
	
	cout<<"trabajo con enteros: "<<endl<<endl;
	cout<<"la direccion del primer elemento es: "<<edades<<endl;
	cout<<"el valor del primer elemento es: "<<*edades<<endl<<endl;
	
	cout<<"la direccion del segundo elemento es: "<<edades+1<<endl;
	cout<<"el valor del segundo elemento es: "<<*(edades+1)<<endl<<endl;
	
	cout<<"la direccion del tercer elemento es: "<<edades+2<<endl;
	cout<<"el valor del segundo elemento es: "<<*(edades+2)<<endl<<endl;
	
	cout<<"la direccion del cuarto elemento es: "<<edades+3<<endl;
	cout<<"el valor del tercer elemento es: "<<*(edades+3)<<endl<<endl;
	
	cout<<"la direccion del quinto elemento es: "<<edades+4<<endl;
	cout<<"el valor del cuarto elemento es: "<<*(edades+4)<<endl<<endl;
	
	cout<<"la direccion del sexto elemento es: "<<edades+5<<endl;
	cout<<"el valor del quinto elemento es: "<<*(edades+5)<<endl<<endl;
	
	cout<<"trabajo con cadenas: "<<endl<<endl;
	char cadena[] = "ciberseguridad";
	
	char* ptrc=cadena;
	
	cout<<"la direccion del primer elemento es: "<<&ptcr<<endl;
	cout<<"el valor del primer elemento es: "<<*(ptrc)<<endl<<endl;
	
	cout<<"la direccion del segundo elemento es: "<<&ptcr+1<<endl;
	cout<<"el valor del segundo elemento es: "<<*(ptrc+1)<<endl<<endl;
	
	cout<<"la direccion del tercer elemento es: "<<&ptcr+2<<endl;
	cout<<"el valor del tercer elemento es: "<<*(ptrc+2)<<endl<<endl;
	
	cout<<"la direccion del cuarto elemento es: "<<&ptcr+3<<endl;
	cout<<"el valor del cuarto elemento es: "<<*(ptrc+3)<<endl<<endl;
	
	cout<<"la direccion del quinto elemento es: "<<&ptcr+4<<endl;
	cout<<"el valor del quinto elemento es: "<<*(ptrc+4)<<endl<<endl;
	
	return 0;
}
