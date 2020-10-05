#include <stdio.h>
#include <stdlib.h>


void suma_punteros(int *cuantos,int *num,int *resultado){ 
	int i;
	*resultado=0;
    for (i=0; i<*cuantos;i++)

    {	
        printf("\nTeclea el número: ");
        scanf(" %d", &*num);
        *resultado = *resultado + *num;
    }
}

void resta_punteros(int *cuantos,int *num,int *resultado){ 
	int i;

	for (i=0; i<*cuantos;i++){	
       	printf("\nMenos: ");
        scanf(" %d", &*num);
        *resultado = *resultado - *num;
    }
}

void multiplicacion_punteros(int *cuantos,int *num, int*resultado){
	int i;
	*resultado=0;
	for (i=0; i<*cuantos;i++){
		printf("\nTeclea el número: ");
		scanf(" %d", &*num);
		*resultado = *resultado * *num;
	}
}

void divi_punteros(int *a, int *b,int*resultado){
	*resultado=(*a) / (*b);
	*b=*resultado;
}


int main(int argc, char const *argv[])
{
	int *n1;
	int *n2;
	int *cantidad;
	char op;
	int *numeros;
	int valido = 1;
	int *resultado;
	
	
	n1=malloc(sizeof(int)*100);
	n2=malloc(sizeof(int)*100);
	cantidad=malloc(sizeof(int)*100);
	resultado=malloc(sizeof(int)*100);

	printf("Bienvenido a la calculadora\n");
	printf("Ingrese operacion:\n ");
	printf("S para sumar.\n R para restar.\n M para multiplicar.\n D para dividir.\n P para potencia.\n ");
	scanf("%c", &op);

	switch (op) {

    	case 'S':

        	printf("Suma del conjunto de números que elijas\n");
    		printf("Cuántos quieres?");
    		scanf(" %d", &*cantidad);
    		suma_punteros(cantidad,n1,resultado);
    		printf("La sumatoria es : ");
    		printf("%d",*resultado);
        	break;

    	case 'R':

    		printf("Escriba numero para restarle : \n");
    		scanf(" %d", &*resultado);
    		printf("Cuántos quieres?");
    		scanf(" %d", &*cantidad);
    		resta_punteros(cantidad,n1,resultado);
    		printf("La resta es : ");
    		printf("%d",*resultado);
        	break;
    		
        	
        	break;
    	case 'M':
    		printf("Multiplicación del conjunto de números que elijas\n");
			printf("Cuántos quieres? ");
			scanf(" %d", &*cantidad);
			multiplicacion_punteros(cantidad,n1,resultado);
			printf("La multiplicación es: ");
			printf("%d",*resultado);
        	break;
    	case 'D':

    		printf("Ha escogido division de numeros\n");
  			printf("Ingrese los numeros a dividir: ");
			scanf("%f", &*n1);
  			printf("Ingrese el siguiente numero: ");
  			scanf("%f", &*n2);
  			divi_punteros(n1,n2,resultado);
  			printf("La division de los numeros ingresados es: ");
  			printf("%.2f",*resultado);
        
        	break;
    	case 'P':
        
        	break;
    	default:
        	valido = 0;
}

	


	

    free(n2);
    free(n1);
    free(cantidad);
    free(resultado);
	return 0;

	

}

	