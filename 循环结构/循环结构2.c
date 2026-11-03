#include<stdio.h>
int main()
{int n,i,j,num=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		num++;
		printf("%4d ",num);
	}printf("\n");
}

	
	
	
	
	
return 0;
}
 
