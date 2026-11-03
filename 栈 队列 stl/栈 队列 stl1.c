#include<stdio.h>
int a[9];
int used[9];
int n=8;
int num=0;
int step;
void f(step){
	if(step>n)
	{	
	int i;
	for(i=1;i<=n;i++){
		printf("%d ",a[i]);
	}printf("\n"); 
	 num++;
		return;
}    int i;
for(i=1;i<=n;i++){
	if(used[i]==0){
	a[step]=i;
	used[i]=1;
	f(step+1);
	used[i]=0;
}
}
}
int main()
{ f(1);
printf("%d",num);
return 0;	
} 
