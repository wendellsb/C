/*
10. Entrar com o salário de uma pessoa e imprimir o salário 
descontado do INSS segundo a tabela abaixo: 
    - menor ou igual a R$ 600,00 – isento
    - maior que R$ 600,00 e menor ou igual a R$ 1200,00 – 20%
    - maior que R$ 1200,00 e menor ou igual a R$2000,00 – 25%
    - maior que R$ 2000,00 – 30%
    - Exemplo:
*/

#include<stdio.h>
int main(){
	float sal, por_sal, sal_total;
	printf("Informe o seu salario: ");
	scanf("%f", &sal);
	
	if(sal < 600){
		printf("Isento de descontos!");
	} else if(sal > 600 && sal <= 1200){
		por_sal = (sal*20)/100;
		sal_total = sal - por_sal;
		printf("O desconto foi de %.2f\n", por_sal);
		printf("O valor do salario liquido: %.2f\n", sal_total);
	} else if(sal > 1200 && sal <= 2000){
		por_sal = (sal*25)/100;
		sal_total = sal - por_sal;
		printf("O desconto foi de %.2f\n", por_sal);
		printf("O valor do salario liquido: %.2f\n", sal_total);
	}else if(sal > 2000){
		por_sal = (sal*30)/100;
		sal_total = sal - por_sal;
		printf("O desconto foi de %.2f\n", por_sal);
		printf("O valor do salario liquido: %.2f\n", sal_total);
	}
	}
	
	
	
	
	
	
	
