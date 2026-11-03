#include<stdio.h>
int main()
{char a; 
int n,i,j,m,k;
scanf("%c",&a);
n=(int)a-64;
for(i=1;i<=n;i++){
	for(j=1;j<=n-i;j++){
		printf(" ");
	}
	for(j=1;j<=i;j++) {
		m=64+j;
		printf("%c",m);
	}
	for(j=i-1;j>=1;j--){
	k=64+j;
	printf("%c",k);
	} 
	
	
	
	
	printf("\n") ;
}

	
	
	
	
	
	
	
return 0;	
}
