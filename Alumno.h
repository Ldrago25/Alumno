#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
#include <string.h>
using namespace std;
class Alumno
{
	char nombre[50];
	char apellido[50];
	public:
		int cedula;
		int edad;
		Alumno(char nombre[],char apellido[],int cedula, int edad);
		Alumno();
		~Alumno();
		void cargar();
		void imprimir();
		void setN(char nombre[]);
		void setA(char apellido[]);
		char *getN();
		char *getA();
		
		
		
	protected:
};

#endif
