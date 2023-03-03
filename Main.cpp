#include "Propietario.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	double cui;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Cui: ";
	cin>>cui;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar su fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//isntancia de un objeto
	Propietario obj = Propietario(nombres,apellidos,direccion,fecha_nacimiento,telefono,nit,cui);
	obj.mostrar();
	obj.agregar();
	}
