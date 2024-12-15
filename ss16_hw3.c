#include <stdio.h>
void sum(int *a,int *b,int *tong){
	*tong= *a+*b ;
} 
int main(){
	int number1=5;
	int number2=8;
	int ketqua=0;
	sum(&number1,&number2,&ketqua);
	printf ("tong cua %d va %d = %d",number1,number2,ketqua); 
	
	return 0; 
} 
