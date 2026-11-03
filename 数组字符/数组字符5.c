#include<stdio.h>
int main()
{int n,num,i;
int a[1000];
while(scanf("%d",&n)!=EOF){
for(i=0;i<n;i++){
	scanf("%d",&a[i]);		
}
int last=a[n-1];
if(last==0){
	printf("UP\n");
} else if(last==15){
	printf("DOWN\n");
}else{
	if(a[n-1]>a[n-2]){
		printf("UP\n");
	}else{
		printf("DOWN\n");
	}
}
}
	return 0; 
}
 
