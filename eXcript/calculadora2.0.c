#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
int main(){
	float num1, num2, resultado;
	char op='0';
	
	do{
		num1 = num2 = resultado = 0;
		printf("== Calculadora ==\n\n");
		printf("(1) somar\n");
		printf("(2) subtrair\n");
		printf("(3) multiplicar\n");
		printf("(4) dividir\n");
		printf("(0) sair do programa\n");
		
		printf("Informe a operacao: ");
		op=getche();
		
		if(op!='0'){
			printf("\n\nDigite o primeiro numero: ");
			scanf("%f", &num1);
			printf("Digite o segundo numero: ");
			scanf("%f", &num2);	
			printf("\n");
		
			if(op=='1'){
				resultado=num1+num2;
				printf("O resultado foi: %.2f", resultado);
			} else if(op=='2'){
				resultado=num1-num2;
				printf("O resultado foi: %.2f", resultado);
			} else if(op=='3'){
				resultado=num1*num2;
				printf("O resultado foi: %.2f", resultado);
			}else{
				resultado=num1/num2;
				printf("O resultado foi: %.2f", resultado);
			}
		printf("\n\n\n");
		}
		system("pause");
		system("cls");
	} while(op!='0');
}









