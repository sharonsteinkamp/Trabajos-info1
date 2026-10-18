#include <stdio.h>
/*1. Escribir un programa en lenguaje C que permita a un almacén gestionar una lista de precios y su código de barra. El programa debe utilizar un arreglo para almacenar los códigos de barra, otro para el precio y debe ofrecer las siguientes funcionalidades:
	
	a) Al inicio, el programa debe solicitar al usuario ingresar una cantidad fija de códigos de barra con su precio, y agregarlo a la lista de productos. Esta cantidad fija será una constante simbólica llamada TAM definida al inicio del código.
	
	b) Los precios de los productos pueden tener decimales y pero no pueden ser negativos.
	
	c) Los códigos de barra deben ser enteros positivos mayores que 0 de hasta 9 cifras.
	
	d) Al finalizar la carga de los productos, se debe mostrar en pantalla la lista completa de productos almacenados y sus precios.
	
	e) Se debe imprimir en pantalla el mayor precio en la lista e imprimir su código de barra.
	
	f) Se debe imprimir en pantalla el menor precio en la lista e imprimir su código de barra.
	
	En la siguiente hoja se encuentra un ejemplo de ejecución del programa.*/

#define TAM 5

int main(int argc, char *argv[]) {
	
	//https://github.com/sharonsteinkamp/Trabajos-info1.git
	
	int Codigos[TAM];
	float Precios[TAM];
	
	int codigomin, CODIGOMAX;
	float preciomin, PRECIOMAX;
	
	printf("Ingresar %d productos con sus codigos y precio a continuacion:\n\n", TAM);
	
	for(int i = 0; i < TAM; i++){	
		
		do{
		
			printf("Ingrese el codigo de barras del producto %i (1-999999999): ", i+1);
			scanf("%d", &Codigos[i]);
			
			if (Codigos [i] > 999999999 || Codigos[i] < 1)
				printf("Error. El codigo de barras debe estar entre 1 al 999999999\n");
		
		}while(Codigos [i] > 999999999 || Codigos[i] < 1);
		
		do{
			printf("Ingrese el precio del producto %i: ", i+1);
			scanf("%f", &Precios[i]);
			
			if (Precios[i] < 0)
				printf("Error. No puede ingresar numeros negativos\n");
			
		}while(Precios[i] < 0);
		
		if (i == 0){
			
			codigomin = Codigos[i];
			preciomin = Precios[i];
			
			CODIGOMAX = Codigos[i];
			PRECIOMAX = Precios[i];
		}	
		else {
			
			if(Precios[i] > PRECIOMAX){
				
				PRECIOMAX = Precios [i];
				CODIGOMAX = Codigos [i];
			}
			
			if(Precios[i] < preciomin){
				
				preciomin = Precios [i];
				codigomin = Codigos [i];
				
			}
		}
	}
	printf ("\n\n");
	
	printf("======Productos======\n");
	printf("codigo \t precio\n");
	
	for(int i = 0; i < TAM; i++){
	printf("%i. %d  %.2f", i+1, Codigos[i], Precios[i]);
	printf("\n==============================\n");
	}
	
	printf("El mas caro es: [%d] precio: $%.2f\n",CODIGOMAX, PRECIOMAX);
	printf("El mas barato es: [%d] precio: $%.2f\n",codigomin,preciomin);
	
	return 0;
}

