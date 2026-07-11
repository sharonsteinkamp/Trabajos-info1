#include <stdio.h>

int main(void) {
	int cantidad_estudiantes;
	float calificacion, suma = 0.0, promedio;
	float mas_alta = -1.0;  
	float mas_baja = 101.0; 
	

	do {
		printf("Ingrese la cantidad de estudiantes a evaluar: ");
		if (scanf("%d", &cantidad_estudiantes) != 1) {
			printf("Entrada invalida. Debe ingresar un numero.\n");
			return 1; 
		}
		
		if (cantidad_estudiantes <= 0) {
			printf("Error: La cantidad de estudiantes debe ser un numero positivo mayor a 0.\n");
		}
	} while (cantidad_estudiantes <= 0);
	
	for (int i = 0; i < cantidad_estudiantes; i++) {
		
		
		do {
			printf("Ingrese la calificacion del estudiante %d (0-100): ", i + 1);
			scanf("%f", &calificacion);
			
			if (calificacion < 0 || calificacion > 100) {
				printf("Error: La calificacion debe estar en el rango de 0 a 100. Intente de nuevo.\n");
			}
		} while (calificacion < 0 || calificacion > 100);
		
		suma += calificacion;
		
		if (i == 0) {
			mas_alta = calificacion;
			mas_baja = calificacion;
		} else {
			if (calificacion > mas_alta) {
				mas_alta = calificacion;
			}
			if (calificacion < mas_baja) {
				mas_baja = calificacion;
			}
		}
	}
	
	promedio = suma / cantidad_estudiantes;
	printf("\n--- Resultados ---\n");
	printf("Promedio de calificaciones: %.2f\n", promedio);
	
	printf("Calificacion mas alta: %.2f\n", mas_alta);
	printf("Calificacion mas baja: %.2f\n", mas_baja);
	
	return 0;
}
