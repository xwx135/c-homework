#include<stdio.h>
#include<string.h>
int main()
{char a[100000];
scanf("%s",a);
int good=1;
int len,i;
int count=0;
len=strlen(a);
for(i=0;i<len;i++){
	if(a[i]=='a'){
		count++;
	}else if(a[i]=='b'){
		count--;
	}
	if(count<0){
		good=0;
		break;
	}
}	
if(good==1&&count==0){
	printf("Good");
}	else{
	printf("Bad");
}
	
return 0;
}
