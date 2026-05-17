#include <stdio.h>





int main(int argc, char *argv[]) {
	
	float pe, al, mc;

	printf("Ingrese su altura (Metros): ");
	scanf("%f", &al);
	printf("Ingrese su peso (kg): ");
	scanf("%f", &pe);
	mc = pe/(al*al);

	printf("\nsu masa corporal es = %f\n", mc);
	
	printf("\n====================================\n");
	printf(" INDICE\t\t| CONDICION\n");
	printf("====================================\n");
	printf(" Menor a 18.5\t| Bajo peso\n");
	printf(" 18.5 a 24.9\t| Normal\n");
	printf(" 25.0 a 29.9\t| Sobrepeso\n");
	printf(" Mayor o igual 30 | Obesidad\n");
	printf("====================================\n");
	
	return 0;
}

