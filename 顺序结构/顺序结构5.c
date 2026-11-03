#include<stdio.h>
int main()
{int i,j,k;
for(i=1;i<10;i++){
	for(j=1;j<i+1;j++){
		k=i*j;
		printf("%d*%d=%d\t",j,i,k);
		 if(j!=i){
            printf(" ");
        }
	
	} printf("\n");
}









return 0;
 } 
