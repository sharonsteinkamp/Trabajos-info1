#include <stdio.h>


int main(int argc, char *argv[]) {
	
	// Link del repositorio https://github.com/sharonsteinkamp/Trabajos-info1.git
	
	float pe, al, mc;
	
	do {
		printf("Ingrese su altura (Metros): ");
		scanf("%f", &al);
		
		if(al <= 0) {
			printf("Error, debe ingresar un numero positivo mayor a cero.\n");
		}
	}
	while (al <= 0);
	
	
	do{
		printf("Ingrese su peso (kg): ");
		scanf("%f", &pe);
		if (pe <=0){
			printf("Error, debe ingresar un número positivo mayor a cero. \n");
		}
	} while(pe <= 0);
	
	mc = pe/(al*al);
	
	if
		(mc < 18.5){
		printf ("\nSu condicion actual es Bajo Peso (mc= %f)", mc);
	} 
		else if (mc >= 18.5 && mc <= 24.9){
			printf ("\nSu condicion actual es Normal (mc= %f)",mc);
		}
		else if (mc >= 25.0 && mc <= 29.9){
			printf ("\nSu condicion actual es Sobrepeso (mc= %f)",mc);
		}
		else{
			printf ("\nSu condicion actual es Obesidad (mc= %f)",mc);
		}
		
		
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
