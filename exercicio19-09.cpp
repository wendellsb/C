/*
Escreva um programa que imprima os n�meros de 1 a 100, mas nos m�ltiplos de 3 
imprima "Fizz" em vez do n�mero e nos m�ltiplos de 5 imprima "Buzz". Para os 
n�meros que s�o m�ltiplos de tanto 3 como 5, imprima "FizzBuzz".
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

