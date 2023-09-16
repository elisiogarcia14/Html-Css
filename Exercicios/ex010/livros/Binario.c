#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int decimal=0, binario, base=1, soma, num;
	printf("Digite um numero binario");
	scanf("%d",&binario);
	 num = binario;
	while(binario != 0){
		soma = binario % 10;
		decimal = decimal + soma*base;
		binario = binario / 10;
		base = base * 2;
		
		printf(" a parte decimal do numero %d e : %d %d %d", num, decimal, soma, base);
	}
	return 0;
}
