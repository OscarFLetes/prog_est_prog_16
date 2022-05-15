/*Autor Oscar Eduardo FLetes Ixta, creado 21/02/22
	programa que pida N numeros, el programa debe preguntar
	cuantos numeros quieres y despues suma cada numero 
	Programa en lenguaje c que muestra el uso de scanf, y el uso del ciclo for
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo int, float
		-scanf
		-Operaciones aritmeticas 
		-Uso del ciclo for
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras y flotantes, como declararlas, pedirlas por teclado, 
	usar el ciclo for, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa pide como entrada 1 variable de tipo int (numeros a leer),
	El programa pide N numeros, el programa debe preguntar cuantos numeros quieres, 
	despúes inicia el ciclo for con los numeros deseados a leer y despues suma cada numero insertado. 
	*/
	
#include<stdio.h>

int main(){
	//Variables
	float numero, suma=0;//variable con decimal
	int cuantos;//variable numero entero
	//Entrada
	printf("Cuantos numeros deseas leer: ");//imrpime mensaje
	scanf("%d",&cuantos);//lee el numero insertado por el teclado
	//Proceso
	for(int i=1;i<=cuantos;i++){//ciclo for
		//variable cuantos, es para indicarle al ciclo for el numero maximo de i 
		printf("Introduce el valor numero %d: ",i);//imrpime mensaje
		scanf("%f",&numero);//lee el numero insertado por el teclado
		suma+=numero;//Ecuacion
	}
	//Salida
	printf("La suma es %.2f",suma);//imrpime la salida de la suma
	return 0;
}
