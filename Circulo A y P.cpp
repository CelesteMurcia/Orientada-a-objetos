#include <stdio.h>
#include <conio.h>

// Nombre: Celeste Itzyana Murcia Zuñiga
// Descripccion: El usuario ingresa el radio del circulo y debe escoger A para area o P para el perimetro, depende de lo escogido lanza el resultado final.

main(){
	
	float radio;
	float opcion;
	
	printf("Ingrese el radio del circulo: ");
	scanf(" %f", &radio);
	
	printf("Calcular (A)Area o (P)Perimetro? ");
	scanf(" %c", &opcion);
	
	if(opcion == 'a'||opcion == 'A')
	    printf("\nEl area es: %2f", 3.1416 * radio * radio);
	    
	if(opcion == 'p'||opcion == 'P')
		printf ("\nEl perimetro es: %2f", 2 * 3.1416 * radio);
		
	getchar();
	return 0;
}
