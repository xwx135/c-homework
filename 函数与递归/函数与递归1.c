#include<stdio.h>
int main()
{int L,R,n=0,i=0,t,a;
scanf("%d %d",&L,&R);
for(i=L;i<=R;i++){
	t=i;
	while(t>0){
	a=t%10;
	t/=10; 
	if (a==2) {	
		n++; 
		}		
	}	
}
printf("%d",n);
	
	
	
	
	
	
	
return 0;
 } 
