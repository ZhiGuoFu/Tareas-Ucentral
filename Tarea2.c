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
	*resultado=1;
	for (i=0; i<*cuantos;i++){
		printf("\nTeclea el número: ");
		scanf(" %d", &*num);
		*resultado = *resultado * *num;
	}
}

void divi_punteros(float *a, float *b,float*resultado){
	*resultado=(*a) / (*b);
	*b=*resultado;
}

void Potencia_punteros(int *base,int*exponente,int*resultado){
	int i;
	
	*resultado=1;
	for (i=0; i<*exponente;i++){
		*resultado= *resultado**base;
	}
}

void prom_punteros(float *cuantos,float *num,float *resultado){ 
  	int i;
	*resultado=0;
    for (i=0; i<*cuantos;i++)
    {	
        printf("\nTeclea el número: ");
        scanf(" %f", &*num);
        *resultado = *resultado + *num;
    }
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
	float *decimal1;
	float *decimal2;
	float *resultado2;
	
	
	n1=malloc(sizeof(int)*100);
	n2=malloc(sizeof(int)*100);
	cantidad=malloc(sizeof(int)*100);
	resultado=malloc(sizeof(int)*100);
	decimal1=malloc(sizeof(int)*100);
	decimal2=malloc(sizeof(int)*100);
	resultado2=malloc(sizeof(int)*100);



	printf("Bienvenido a la calculadora\n");
	printf("Ingrese operacion:\n ");
	printf("S para sumar.\n R para restar.\n M para multiplicar.\n D para dividir.\n P para potencia.\n X para promedio\n E para salir \n ");
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
			scanf("%f", &*decimal1);
  			printf("Ingrese el siguiente numero: ");
  			scanf("%f", &*decimal2);
  			divi_punteros(decimal1,decimal2,resultado2);
  			printf("La division de los numeros ingresados es: ");
  			printf("%.2f",*resultado2);
        	break;

    	case 'P':	
    		printf("Ha escogido la potencia de un numero\n");
    		printf("Ingrese numero : ");
    		scanf(" %d", &*n1);
    		printf("Elevado a : ");
    		scanf(" %d", &*cantidad);
    		Potencia_punteros(n1,cantidad,resultado);
    		printf("El resultado es : ");
    		printf("%d",*resultado);
        	break;
        
        case 'X':

        	printf("Promedio del conjunto de números que elijas\n");
         	printf("Cuántos quieres? ");
          	scanf(" %f", &*decimal1);
          	prom_punteros(decimal1,decimal2,resultado2);
          	printf("El promedio es: ");
          printf("%.2f", *resultado2 / *decimal1);
        	break;

       	case 'E':	
       		printf("Adios\n");
       		break;
    	default:
        	valido = 0;
}

	

	free(resultado2);
	free(decimal2);
	free(decimal1);
    free(n2);
    free(n1);
    free(cantidad);
    free(resultado);
	return 0;

	

}

	