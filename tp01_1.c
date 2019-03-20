#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int *p;
	int var=5;
	
	p=&var;
	
	printf("cont de p: %d \n",*p);
	printf("direccion de memoria almacenada por 'p': %p \n",*p);
	printf("direccion de memoria de la variable 'var': %p \n",var);
	printf("direccion de de memoria del puntero 'p': %p \n",p);
	printf("tamanio de la variable 'var': %d",(sizeof(var)));
	
	return 0;
}
