#include <stdio.h>

int main (){
	int number[5]={5,15,20,25,10};
	int *numberPtr=number; 
	
	printf ("dia chi cua mang number la : %lu\n",number);
	printf ("phan tu thu 1 trong number = %d\n",*numberPtr); 
	
	return 0; 
} 
