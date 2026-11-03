#include<stdio.h>
int main()
{int n,k,m,i;
scanf("%d %d %d",&n,&k,&m); 
int people[105]={0}; 
for(i=0;i<n;i++){
	people[i]=1;
}
int left=n;
int current=k;
int count=0; 
while(left>1){
	if(people[current]==1){
		count++;
	if(count==m){
		people[current]=0;
		left--;
		count=0;
	}	
	} 
	current++;
	if(current==n){
		current=0;
		}
}
for(i=0;i<n;i++){
	if(people[i]==1){
		printf("%d\n",i);
		break;
	}
}
	
	
	
	
	
	
return 0;
 } 
