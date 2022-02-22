/*
10. Entrar com o salário de uma pessoa e imprimir o salário descontado do INSS segundo a tabela abaixo: 
    - menor ou igual a R$ 600,00 – isento
    - maior que R$ 600,00 e menor ou igual a R$ 1200,00 – 20%
    - maior que R$ 1200,00 e menor ou igual a R$2000,00 – 25%
    - maior que R$ 2000,00 – 30%
    - Exemplo:
*/
#include<stdio.h>
int main(){
	float salario;
	printf("Informe seu salario: ");
	scanf("%f", &salario);
	if(salario<=600){
		printf("Isento de descontos");
	} else if(salario>600 && salario<=1200){
		printf("Desconto de 20%");
	} else if(salario>1200 && salario<=2000){
		printf("Desconto de 25%");
	} else {
		printf("Desconto de 30%");
	}
}
