#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct producto{
	int codigo;
	char descripcion[40];
	float precio;
	float descuento;
	char FechaDeVencimiento[30];
	int existencia;
}produc[5];
void pedirdatos(struct producto &pro,int i);
void imprimirdatos(struct producto pro);
int main(){
	for(int i=0;i<5;i++){
	printf("Producto # %i ",i+1);
	pedirdatos(produc[i],i);
	}
	for(int i=0;i<5;i++){
	imprimirdatos(produc[i]);
	}
	return 0;
}
void pedirdatos(struct producto &pro,int i){
	
	printf("Ingrese el codigo del producto # %i \n",i+1);
	scanf("%d",&pro.codigo);
	printf("Ingrese la descripcion del producto # %i \n",i+1);
	scanf("%s",pro.descripcion);
	printf("Ingrese el precio del producto # %i \n",i+1);
	scanf("%f",&pro.precio);
	printf("Ingrese el descuento del producto # %i \n",i+1);
	scanf("%f",&pro.descuento);
	printf("Ingrese el fecha de vencimiento del producto # %i \n",i+1);
	scanf("%s",&pro.FechaDeVencimiento);
	printf("Ingrese la cantidad del producto # %i en existencia:",i+1);
	scanf("%d",&pro.existencia);
	
}
void imprimirdatos(struct producto pro){

	printf("Codigo: %i ",pro.codigo);
	printf("Descripcion: %s ",pro.descripcion);
	printf("Precio: %.2f ",pro.precio);
	printf("Fecha de vencimiento: %s ",pro.FechaDeVencimiento);
	printf("Existencia: %i \n",pro.existencia);
	printf("\n");
	}


