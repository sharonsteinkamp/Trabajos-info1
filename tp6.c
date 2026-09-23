
//https://github.com/sharonsteinkamp/Trabajos-info1.git

#include <stdio.h>

#define PI 3.14

//Prototipos

float calcularAreaRectangulo(int largo, int altura);

float calcularPerimetroRectangulo(int largo, int altura);

float calcularAreaCirculo (int radio);

float calcularPerimetroCirculo (int radio);

float imprimirResultados(int op, float area, float perimetro);

//funcion main

int main(int argc, char *argv[]) {
	
	
	int largo, altura, radio, op, area2, perim2, area1, perim1;
	
	do{
		
		printf("¿Qué figura desea calcular? (1:rectangulo, 2:Circulo): ");
		scanf("%d", &op);
		if (op < 1 || op > 2)
			printf("\nError, intentelo de nuevo\n");
		
	}while (op < 1 || op > 2);
	
	switch (op){
	case 1: 
		printf("Opcion rectangulo seleccionada\n\n");
		
		printf("ingrese la longuitud del rectangulo: ");
			scanf("%d", &largo);
		
		printf("ingrese la altura del rectangulo: ");
			scanf("%d", &altura);
		
		area1 = calcularAreaRectangulo(largo, altura);
		perim1 = calcularPerimetroRectangulo(largo, altura);
		
		imprimirResultados(op, area1, perim1);
		
	break; 
	
	case 2:
		printf("\nOpcion Circulo seleccionada\n\n");
		
		printf("ingrese el radio del circulo: ");
			scanf("%d", &radio);
		
		area2 = calcularAreaCirculo (radio);
		perim2 = calcularPerimetroCirculo (radio);
		
		imprimirResultados(op, area2, perim2);
	break; 
	}
	
	return 0;
}


//Funciones 

float calcularAreaRectangulo(int largo, int altura){
	
	return (largo*altura);
}

float calcularPerimetroRectangulo(int largo, int altura){
	
	return((2*largo)+(2*altura));
}

float calcularAreaCirculo (int radio){
	
	return(PI*radio*radio);
}
	
float calcularPerimetroCirculo (int radio){
	
	return(2*PI*radio);
}
	
float imprimirResultados(int op, float area, float perimetro){
	
	if (op == 1){
		printf("\nEl area del rectangulo es igual a: %.2f: \n", area);
		
		printf("\nEl perimetro del rectangulo igual a: %.2f\n", perimetro);
	}
	else{
	printf("\nEl area del circulo es igual a: %.2f: \n", area);
	
	printf("\nEl perimetro del circulo es igual a: %.2f\n", perimetro);
	}
	
	return 0;
}
	
