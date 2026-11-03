#include<stdio.h>
int main()
{int x,n,d,i;
int count=0; 
scanf("%d %d",&n,&x);
for(i=1;i<=n;i++){
	int t=i;
	while(t>0){
		d=t%10;
		t/=10 ;
	if(d==x){
		count++;} 
	}
}
printf("%d",count);
	
	
	
	
	
return 0;
}
