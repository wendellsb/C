#include<stdio.h>
/*
2. Faça uma função que transforme e mostre segundos em horas, minutos e segundos.
*/
void imprimirMensagem(int total){
	int horas, restoHora, minutos, restoMinutos, segundos;
	printf("%d\n", total);
	
	horas = total/3600;
	restoHora = total%3600;

	minutos = restoHora/60;
	
	segundos = restoHora%60;

	
	printf("Sao: %d horas, %d minutos e %d segundos.", horas, minutos, segundos);
}
int main(){
	int total;
	
	printf("Informe o total de segundos: ");
	scanf("%d", &total);
	
	imprimirMensagem(total);
	
	return 0;
}

