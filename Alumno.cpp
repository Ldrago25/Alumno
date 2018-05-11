#include "Alumno.h"

Alumno::Alumno()
{
	
	strcpy(nombre,"Brandon");
	strcpy(apellido,"Vargas");
	cedula=26566047;
	edad=20;
	
}

	Alumno::Alumno(char nombre[],char apellido[],int cedula, int edad){
		
		strcpy(this->nombre,nombre);
		strcpy(this->apellido,apellido);
		this->cedula=cedula;
		this->edad=edad;
		
	}
	
	
	void Alumno::cargar(){
		
		cout<<endl<<"======Carga de Datos======="<<endl;
		cout<<endl<<"Nombre: "<<endl;
		cin.sync();
		cin.getline(nombre,50);
		cout<<endl<<"Apelldio: "<<endl;
		cin.sync();
		cin.getline(apellido,50);
		cout<<endl<<"Cedula: "<<endl;
		cin>>cedula;
		cout<<endl<<"Edad: "<<endl;
		cin>>edad;
		
	}
void Alumno::imprimir(){
		
		
		cout<<endl<<"---------------tus datos-----------------"<<endl;
		cout<<endl<<"Nombre: "<<this->getN()<<endl;
		cout<<endl<<"Apellido: "<<this->getA()<<endl;
		cout<<endl<<"Cedula: "<<cedula<<endl;
		cout<<endl<<"Edad: "<<endl;
		
	}
	
	
	void Alumno::setN(char nombre[]){
		strcpy(this->nombre,nombre);
		
	}
	char *Alumno::getN(){
		return nombre;
	}
	void Alumno::setA(char apellido[]){
		strcpy(this->apellido,apellido);
	}
	char *Alumno::getA(){
		return apellido;
	}

Alumno::~Alumno()
{
}
