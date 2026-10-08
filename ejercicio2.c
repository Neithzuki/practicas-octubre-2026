/*Cristian Ariel Lopez Santiago
Práctica 6
Ejercicio de tipos de variables, entradas y salidas*/

#include <stdio.h>

void main() 
{
 int entnum; 
 char carac=65;  //convierte el numero en caracter ASCII
 char carac2= 'a';
 double punto;

 //asignar valores de teclados a un avariable 
 printf("Escriba un valor entero: ");
 scanf("%i", &entnum);
 printf("EScriba un valor real: ");
 scanf("%lf", &punto);

 //Imprimir valores de Formato
  printf("\n Imprimiendo las variables \a\n");
  printf("\t valor de numero entero es: %i \n", entnum);
  printf("\t valor de numero caracter ASII es: %c \n", carac);
  printf("\t valor de numero caracter es: %c \n", carac2);
  printf("\t valor de numero real es: %lf \n", punto);
  
}
