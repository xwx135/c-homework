#include<stdio.h>
int main()
{int x,y,sum=0,i,t,count=0;
scanf("%d %d",&x,&y);
for(i=x;i<=y;i++){
    t=i;
    sum=0; 
while(t>0){
	sum+=t%10;
	t/=10;
}
if(sum%5==0){
	count++; 
}
}printf("%d",count);
	return 0;
 } 
