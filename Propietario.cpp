#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona {
	//atributos
	private : 	string nit;
				double cui;
	
	//constructor
	public : 
	Propietario (){
	}
	
	Propietario(string nom,string ape,string dir,string fn,int tel,string n,double c) : Persona(nom,ape,dir,fn,tel){
		nit = n;
		cui = c;
	}
	//metodos
	//set (modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFechaNacimiento(string fn){fecha_nacimiento = fn;}
	void setTelefono(int tel){telefono = tel;}
	void setCui(double c){cui = c;}
	//get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFechaNacimiento(){return fecha_nacimiento;}
	int getTelefono(){return telefono;}
	double getCui(){return cui;}
	//metodos
	void mostrar(){
		cout<<"_____________________"<<endl;
		cout<<nit<<", "<<cui<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<fecha_nacimiento<<", "<<telefono<<endl;
	}
	void agregar(){
		cout<<"->Este es el metodo Agregar del Propietario<-"<<endl;
	}
};
