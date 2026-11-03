#include<stdio.h>
int main()
{int L,M,i,l,r;
int count=0;
int tree[1000];
scanf("%d %d",&L,&M);
for(i=0;i<=L;i++){
	tree[i]=1;
}while(M--){
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++){
		tree[i]=0;
	}
}
for(i=0;i<=L;i++){
	if(tree[i]==0){
	count++;
	}
}
printf("剩下的树的个数为%d",L+1-count);

	
	
	
	
	
return 0;
}
