#include<stdio.h>
#include<string.h>
int main() 
{int num[10];
int i; 
for(i=0;i<10;i++){
	scanf("%d",&num[i]);
}
int oddnum=0;
int mid=-1;
for(i=0;i<10;i++){
	if(num[i]%2==1){
		oddnum++;
		mid=i;
	}
}if(oddnum>1){
	printf("-1");
	return 0;
} 
int first=-1;
for(i=1;i<10;i++){
	if(num[i]>=2){
		first=i;
		break;
	}
} 
if(first==-1){
	int total=0;
	for(i=0;i<10;i++){
		total+=num[i];
	}
	if(total==1){
		printf("%d",mid);
	}else if(total>=2&&num[0]==total){
		printf("00");
	}else{
		printf("-1");
	}return 0;
} 
char left[1000]={0};
int p=0;
left[p]='0'+first;
p++;
num[first]-=2;
int zerohalf=num[0]/2;
int j;
for(j=0;j<zerohalf;j++){
	left[p]='0';
	p+=1;
}
num[0]-=zerohalf*2;
for(i=1;i<10;i++){
	if(i==first){
		continue;
	} 
	int half=num[i]/2;
	int j;
	for(j=0;j<half;j++){
		left[p]='0'+i;
		p+=1;
	}
	num[i]-=half*2;
}
for(i=0;i<p;i++){
	printf("%c",left[i]);
	}	if(mid!=-1){
		printf("%d",mid);
	}
	for(i=p-1;i>=0;i--){
		printf("%c",left[i]);
	}
	printf("\n");
	
	
return 0;
}
