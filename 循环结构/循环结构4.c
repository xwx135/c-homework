#include<stdio.h>
int main()
{int T;
scanf("%d",&T);
while(T--){
int n,i,j;
scanf("%d",&n) ;
for(i=1;i<=(n+1)/2;i++){
	for(j=1;j<=(n+1)/2-i;j++){
		printf(" ");
	}
	for(j=1;j<=2*i-1;j++){
		printf("*");
	}
	printf("\n");
}
for(i=1;i<=n/2;i++){
	for(j=i;j>=1;j--){
		printf(" ");
	}
	for(j=1;j<=n-2*i;j++){	
	printf("*");
	}
	printf("\n");
}


	}	
	
	
	
	
	
return 0;	
}
