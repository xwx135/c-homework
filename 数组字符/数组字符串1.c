#include<stdio.h>
int main()
{int T;
scanf("%d",&T);
while(T--){
	int n; 
	scanf("%d",&n);
	long long max=-100000,min=1000000;
	long long sum1=0,sum2=0;
    int i;
	for(i=1;i<=n;i++){
	long long b;
        scanf("%lld",&b); 
		sum1+=b;
		sum2+=b*b;
	if(b>max) max=b;
	if(b<min) min=b;
	}
    double x;
	x=(double)sum1/n;
	double sum3;
	sum3=((double)sum2-(double)n*x*x)/n;
    long long m;
	m=max-min;
printf("%lld %.3f\n",m,sum3);	
}

	
	
	
	
	
	
	
return 0;	
}
