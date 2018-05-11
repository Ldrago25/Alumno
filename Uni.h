#ifndef UNI_H
#define UNI_H

#include "Alumno.h"

class Uni : public Alumno
{
	char nomb[50];
	int numero;
	
	public:
		
		
		
		Uni(char nomb[],int numero,char nombre[],char apellido[], int cedula, int edad);
		Uni();
		~Uni();
		void cargarD();
		void imprimirD();
		void setNN(char nomb[]);
		char *getNN();
		
	protected:
};

#endif
