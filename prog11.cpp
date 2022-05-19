/* 
Autor: Franciscomilan
Realizado: 17/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 11 en C que pide el numero de mes e imprime el nombre del mes
y detecta valores erroneos para la materia programacion estructurada. 
*/

//Libreria
#include<stdio.h>
//Principal
int main(){
	//Variable
	int mes;
	//Ingreso de datos
	printf(" Introduce el numero de mes: ");
	scanf("%d",&mes);
	//Swich
	switch(mes) {
		case 1: printf("Enero");
			break;
		case 2: printf("Febrero");
			break;
		case 3: printf("Marzo");
			break;
		case 4: printf("Abril");
			break;
		case 5: printf("Mayo");
			break;
		case 6: printf("Junio");
			break;
		case 7: printf("Julio");
			break;
		case 8: printf("Agosto");
			break;
		case 9: printf("Septiembre");
			break;
		case 10: printf("Octubre");
			break;
		caase 11: printf("Noviembre");
			break;
		case 12: printf("Diciembre");
			break;
		default: printf(" Error, Numero de mes invalido");
	}
	//Retorno
	return 0;
}
