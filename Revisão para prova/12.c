/*
12. Calcule e mostre na tela o valor das seguintes expressões
    - 3 + 7 * (3 + 4) * 6
    - -2 * (2 + 3)
    - ((3 + 3) * 2)/5
    - 3 + 2 * (18 – 4 * 2)
    - 13 % 2
    - 7 % 3
    - (8 % 2) + 5
*/
#include<stdio.h>
int main(){
	int op1, op2, op3, op4, op5, op6, op7;
	op1= 3+7*(3+4)*6;
	printf("3 + 7 * (3 + 4) * 6 = %d", op1);
	
	op2= -2*(2+3);
	printf("\n-2*(2+3) = %d", op2);
	
	op3= ((3+3)*2)/5;
	printf("\n((3+3)*2)/5 = %d", op3);
	
	op4= 3+2*(18-4*2);
	printf("\n3+2*(18-4*2) = %d", op4);
	
	op5= 13%2;
	printf("\n13%%2 = %d", op5);
	
	op6= 7%3;
	printf("\n7%%3 = %d", op6);
	
	op7= (8%2)+5;
	printf("\n(8%%2)+5 = %d", op7);
}
