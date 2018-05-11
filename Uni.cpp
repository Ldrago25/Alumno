#include "Uni.h"

Uni::Uni()
{
	strcpy(nomb,"UNET");
	numero=10;
}

	Uni::Uni(char nomb[],int numero,char nombre[],char apellido[],int cedula,int edad):Alumno(nombre,apellido,cedula,edad){
		
		strcpy(this->nomb,nomb);
		this->numero=numero;
	}
	
	void Uni::cargarD(){
		Alumno::cargar();
		cout<<endl<<"Nombre de la Universidad: "<<endl;
		cin.sync();
		cin.getline(nomb,50);
	}
	void Uni::imprimirD(){
		
		Alumno::imprimir();
		cout<<endl<<"Nombre de la Uni: "<<nomb<<endl;
		cout<<endl<<"==============Adios============"<<endl;	
	}
	
	void Uni::setNN(char nomb[]){
		strcpy(this->nomb,nomb);
	}
	char *Uni::getNN(){
		return nomb;
	}
	

Uni::~Uni()
{
}
