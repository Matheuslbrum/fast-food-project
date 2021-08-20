#include <stdio.h>


int main() {
	

float hb = 4.0, cb = 5.50, bf = 3.80, ms = 5.80, resultado1,resultado2,resultado3,resultado4,total;
int qtd1= 0 ,qtd2= 0 ,qtd3= 0 ,qtd4 = 0 , pedido, compras;

compras = 1;
while(compras != 0){
printf("Cardapio:\nHamburguer: R$4,20\nCheeseburguer: R$5,50\nBatata Frita: R$3,80\nMilkshake: R$5,80\n");
printf("************************************************************************************************\n");
printf("Para pedir, siga as instrucoes:\nDigite 1 para Hamburguer, Digite 2 para Cheeseburger, Digite 3 para Batata frita, Digite 4 para Milkshake\n");
scanf("%d", &pedido);


switch(pedido){
	case 1: 
	printf("Quantos hambúrgueres vai querer?\n");
	scanf("%d", &qtd1);
	printf("************************************************************************************************\n");
	resultado1 = hb*qtd1;
	printf("Caso queira continuar a comprar, digite 1, caso queira ver carrinho e finalizar compras digite 0\n");
    scanf("%d", &compras);
	printf("************************************************************************************************\n");	
	break;
	case 2:
	printf("quantos cheeseburguers vai querer?\n");
	scanf("%d", &qtd2);
	printf("************************************************************************************************\n");
	resultado2 = cb*qtd2;
	printf("Caso queira continuar a comprar, digite 1, caso queira ver carrinho e finalizar compras digite 0\n");
	scanf("%d", &compras);
	printf("************************************************************************************************\n");
	break;
	case 3:
	printf("quantas batatas vai querer?\n");
	scanf("%d", &qtd3);
	printf("************************************************************************************************\n");
	resultado3 = bf*qtd3;
	printf("Caso queira continuar a comprar, digite 1, caso queira ver carrinho e finalizar compras digite 0\n");
	scanf("%d", &compras);
	printf("************************************************************************************************\n");
	break;
	case 4:
	printf("quantos milkshakes vai querer?\n");
	scanf("%d", &qtd4);
	printf("************************************************************************************************\n");
	resultado4 = ms*qtd4;
	printf("Caso queira continuar a comprar, digite 1, caso queira ver carrinho e finalizar compras digite 0\n");
	scanf("%d", &compras);
	printf("************************************************************************************************\n");
	break;
}

}
total = resultado1+resultado2+resultado3+resultado4;
printf("Suas compras deram:\n");
printf("%d hamburgueres: %.2f, %d cheeseburguers: %.2f, %d batatas fritas: %.2f, %d milkshakes: %.2f \n", qtd1, resultado1, qtd2, resultado2, qtd3, resultado3, qtd4, resultado4);
printf("Total: %.2f \n", total);
printf("************************************************************************************************\n");
printf("Aperte 1 para reiniciar e 0 para terminar\n");
scanf("%d", &compras);
}

