#include <stdio.h>
void swap (int *input1,int *input2); 

int main (){
	int number1=10;
	int number2=20;
	printf ("bien number1 khi chua chuyen doi vi tri la : %d\n",number1);
	printf ("bien number2 khi chua chuyen doi vi tri la : %d\n",number2);
	void swap(int *input1,int *input2){
		int temp = *input1;
		*input1 = *input2 ;
		*input2 = temp; 
	} 
	swap(&number1,&number2); 
	printf ("bien number1 khi da doi vi tri la : %d\n",number1);
	printf ("bien number2 khi da doi vi tri la : %d\n",number2); 
	
	return 0; 
} 
