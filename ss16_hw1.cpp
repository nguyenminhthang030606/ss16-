#include <stdio.h>

 int main (){
 	int number=7;
	 int *numberPtr=&number;
	 printf ("dia chi cua bien number = %lu\n ",&number); 
	 printf ("dia chi cua bien number duoc luu tru trong numberPtr = %lu\n",numberPtr);
	 printf ("gia tri ma numberPtr dang tham chieu toi la %d\n ",*numberPtr); 
	 *numberPtr = *numberPtr + 10 ;
	 printf ("gia tri nam trong bien number khi tang len la = %d\n",numberPtr); 
	 
	 printf ("gia tri cua bien number = %d\n",number); 
 	
 	
 	return 0; 
 } 
