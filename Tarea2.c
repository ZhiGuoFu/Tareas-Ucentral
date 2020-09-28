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
	int *var_puntero;
	int *var2_puntero;
	int *cantidad_puntero;
	int *suma_puntero;
	

	var_puntero=malloc(sizeof(int)*100);
	var2_puntero=malloc(sizeof(int)*100);
	cantidad_puntero=malloc(sizeof(int)*100);

    printf("Suma del conjunto de números que elijas\n");
    printf("Cuántos quieres?");
    scanf(" %d", &*cantidad_puntero);
    suma_punteros(cantidad_puntero,var_puntero);
    printf("%d",suma);

    free(var_puntero);
	return 0;

	

}

	