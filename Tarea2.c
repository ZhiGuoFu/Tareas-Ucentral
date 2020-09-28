#include <stdio.h>
#include <stdlib.h>

int suma;
int resta;
int multiplicacion;
int division;
int potencia;
int promedio;


void suma_punteros(int *cuantos,int *num){ 
	int i;
    for (i=0; i<*cuantos;i++)
    {
        printf("\nTeclea el número: ");
        scanf(" %d", &*num);
        suma = suma + *num;
    }
}

void restador_puntero(int *a,int *b){
	resta=*a-*b;
	*a= resta;
}

void multiplicacion_punteros(int *a,int *b){
	multiplicacion=(*a)*(*b);
	*a= multiplicacion;
}

void division_punteros(int *a, int *b){
	division=(*a) / (*b);
	*b=division;
}



void promedio_punteros(int *a , int *b){
	
}


int main(int argc, char const *argv[])
{
	int *n1;
	int *n2;
	int *cantidad;
	char op;
	int valido = 1;
	

	n1=malloc(sizeof(int)*100);
	n2=malloc(sizeof(int)*100);
	cantidad=malloc(sizeof(int)*100);

	printf("Bienvenido a la calculadora\n");
	printf("Ingrese operacion:\n ");
	printf("S para sumar.\n R para restar.\n M para multiplicar.\n D para dividir.\n P para potencia.\n ");
	scanf("%c", &op);

	switch (op) {

    	case 'S':
        	printf("Suma del conjunto de números que elijas\n");
    		printf("Cuántos quieres?");
    		scanf(" %d", &*cantidad);
    		suma_punteros(cantidad,n1);
    		printf("La sumatoria es : ");
    		printf("%d",suma);
        	free(n1);
        	break;

    	case 'R':
        	
        	break;
    	case 'M':
        	break;
    	case 'D':
        
        	break;
    	case 'P':
        
        	break;
    	default:
        	valido = 0;
}

	


	

    
    free(n1);
	return 0;

	

}

	