#include<stdio.h>
int main()

{int T,m=0,i,b;
scanf("%d",&T);
while(T--){
	int n; 
	scanf("%d",&n);
	long long max=-100000,min=1000000;
	long x=0,sum1=0,sum2=0; 
	for(i=1;i<=n;i++){
		scanf("%d",&b); 
		sum1+=b;
		sum2+=b*b;
	if(b>max) max=b;
	if(b<min) min=b;
	}
	x=sum1/n;
	double sum3;
	sum3=(sum2-n*x*x)/n;
	m=max-min;
printf("%d %.3f",m,sum3);	
}

	
	
	
	
	
	
	
return 0;	
}
