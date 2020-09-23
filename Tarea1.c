#include <stdio.h>
#include <stdlib.h>

int resta;



int restador_normal(int a,int b){
	resta=a-b;
	return resta;
}

void restador_puntero(int *a,int b){
	resta=*a-b;
	*a= resta;
}

int main(int argc, char const *argv[])
{
	int *var_puntero;
	int var_normal;
	int resta_puntero;
	int resta_normal;

	var_puntero=malloc(sizeof(int)*100);
	
	var_normal=10;
	*var_puntero=20;

	resta_normal = restador_normal(var_normal,*var_puntero);
	
	printf("%i\n", resta_normal);
	
	restador_puntero(var_puntero,var_normal);

	printf("%i\n", resta);
	
	free(var_puntero);
	return 0;
}