#include <iostream>
#include "Alumno.h"
#include "Uni.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
/*	Alumno **a=new Alumno *[2];
	 for(int i=0; i<2; i++){
	 	a[i]=new Alumno();
	 	a[i]->cargar();
	 	a[i]->imprimir();
	 	
	 }*/
	 
	 
	 Uni **u=new Uni *[1];
	 for (int i=0; i<1; i++){
	 	
	 	u[i]=new Uni();
	 	u[i]->cargarD();
	 	u[i]->imprimirD();
	 	
	 }
	
	
	
	return 0;
}
