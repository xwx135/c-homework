#include<stdio.h>
int main()
{int t,i,p=1,n,m=1,num,rev=0;
scanf("%d",&t);
n=t/10;
while(n>0){
rev=rev*10+(n%10); 
n/=10;
m*=10;	
} 
num=t*m+rev; 
for(i=2;i*i<=num;i++){
	if(num%i==0){
		p=0; 
		break;
	}
}
if(p==0){
	printf("prime");
}else{
	printf("noprime");
}
	return 0;
 } 
