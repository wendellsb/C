/*
Escreva um programa que imprima os números de 1 a 100, mas nos múltiplos de 3 
imprima "Fizz" em vez do número e nos múltiplos de 5 imprima "Buzz". Para os 
números que são múltiplos de tanto 3 como 5, imprima "FizzBuzz".
*/
#include<stdio.h>

int main(){
	int i;
	
	for(i=0; i<=100; i++){
		
		if(i % 3 == 0){
			printf("Fizz \n");
		} else if(i % 5 == 0){
			printf("FizzBuzz \n");
		} else {
			printf("%d \n", i);
		}
		}
	}

