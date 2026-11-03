#include<stdio.h>
#include<stdlib.h>
typedef struct{
int a;
int b;
int diff;
}chocolate;
int compare(const void*a,const void*b){
	chocolate *c1=(chocolate*)a;
	chocolate *c2=(chocolate*)b;
	if(c1->diff < c2->diff){
		return 1;
	}
	else if(c1->diff > c2->diff){
		return -1;
	}
	return 0;
} 
int main()
{int n,k,i;
scanf("%d%d",&n,&k);
chocolate *chocs=(chocolate*)malloc(n*sizeof(chocolate));
for(i=0;i<n;i++){
	scanf("%d",&chocs[i].a);
}
for(i=0;i<n;i++){
	scanf("%d",&chocs[i].b);
}	
for(i=0;i<n;i++){
	chocs[i].diff=chocs[i].a-chocs[i].b;
}	
	qsort(chocs,n,sizeof(chocolate),compare);
	long long max=0;
	for(i=0;i<n;i++){
		if(i<k){
			max+=chocs[i].a;
		}else{
			max+=chocs[i].b;
		}
	}
	printf("%d",max);
	free(chocs);
	return 0;
	
 } 
