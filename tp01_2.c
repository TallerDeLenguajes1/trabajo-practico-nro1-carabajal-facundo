#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int potencia(int variable);
void potencia_void(int variable);
void invertir(int a, int b);
void ordenar(int a, int b);

int main(int argc, char *argv[]) {
	
	int var=2,result;
	result=potencia(var);
	printf("resultado= %d",result);
	printf("\ndireccionde memoria de 'result'= %p \n",result);
	potencia_void(var);
	
	int num_a=3,num_b=4;
	printf("\nvalor de 'num_a': %d \nvalor de 'num_b': %d\n\n",num_a,num_b);
	ordenar(num_a,num_b);
	invertir(num_a,num_b);
	
	return 0;
}

int potencia(int variable){
	return(variable*variable);
}
void potencia_void(int variable){
	printf("\nresultado funcion void= %d",(variable*variable));
}

void invertir(int a, int b){
	int valor_a,valor_b;
	valor_a=a;
	valor_b=b;
	a=valor_b;
	b=valor_a;
	printf("\nvalor de 'num_a' invertido : %d \nvalor de 'num_b' invertido : %d",a,b);
}

void ordenar(int a, int b){
	if (a>b){
		printf("el menor es 'num_b': %d \nel maoyor es 'num_a': %d \n",b,a);
	}
	else{
		printf("el menor es 'num_a': %d \nel maoyor es 'num_b': %d \n",a,b);
	}
}


