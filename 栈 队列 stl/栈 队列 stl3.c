#include<stdio.h>
#include<stdlib.h>
int compare(const void*a,const void*b){
	long long num1=*(long long*)a;
	long long num2=*(long long*)b;
	if(num1<num2){
		return -1; 
	}
	else if(num1>num2){
		return 1;
	}
	return 0;
}
int main()
{int n,i;
scanf("%d",&n);
long long *a=(long long*)malloc(n*sizeof(long long));
for(i=0;i<n;i++){
	scanf("%11d",&a[i]);
}
qsort(a,n,sizeof(long long),compare);
int found=0;
for(i=2;i<n;i++){
	if(a[i-2]+a[i-1]>a[i]){
		printf("%d %d %d",a[i-2],a[i-1],a[i]);
		found=1;
		break;
	}
}
	if(found==0){
		printf("No solution");
	}
	


free(a);
return 0;}
