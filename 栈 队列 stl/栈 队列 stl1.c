#include<stdio.h>
int a[9];
int used[9];
int n=8;
int step;
void f(step){
	if(step>n)
	{	
	int i;
	for(i=1;i<=n;i++){
        if(i==n){
		printf("%d\n",a[i]);
        }else{
            printf("%d ",a[i]);
        }
}   
		return;
}    
int i;
          
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
return 0;	
} 
