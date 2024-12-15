#include <stdio.h>
void hienmang(int *Mang, int *sizee) {
	for (int i=0;i<sizee;i++){
		printf ("phan tu thu %d: %d\n ",i,*(Mang+i));
	} 
}
int main() {
    int mang[]={1,3,5,7,8,9} ;
    int sizee= sizeof(mang)/sizeof(mang[0]); 
    printf("cac phan tu trong mang la %d");
        hienmang(mang,sizee);

    return 0;
}

