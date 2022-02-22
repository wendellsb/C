#include<stdio.h>
/*
3. Faça uma função que receba três notas de um aluno com parâmetros e uma
letra. Se a letra for A o procedimento calcula a média das notas do aluno,
se for P o procedimento calcula a média ponderada com pesos 5,3 e 2. A
média calculada deve ser devolvida ao programa principal para, então ser
mostrada.
*/

// não entendi o que é uma media ponderada, pq no enunciado fala de 3 notas
// e ali só tem 5,3 e 2, depois depoder me explicar, mas fiz a media aritmetica

float mediaA(float n1, float n2, float n3)
{
	float res;
	res = (n1+n2+n3)/3;
	return res;
}

float main(void)
{
	float nota1, nota2, nota3;
	int letra;
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Informe a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Informe a terceira nota: ");
	scanf("%f", &nota3);
		
	printf("Informe o tipo de media 1 para aritimetica ou 2 para ponderada: ");
	scanf("%d", &letra);
		
	if((letra == 1) || (letra == 2))
	{
		printf("A media aritimetica foi: %.2f", mediaA(nota1, nota2, nota3));
	}
	else if((letra == 1) || (letra == 2))
	{
		printf("A media aritimetica foi: %.2f", mediaA(nota1, nota2, nota3));	
	}
	else
	{
		printf("Letra invalida");
	}
	return 0;
}

