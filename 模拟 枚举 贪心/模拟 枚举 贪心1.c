#include<stdio.h>
int main()
{int n,t;
char s[1000000];
scanf("%d%d",&n,&t);
scanf("%s",&s);
int len;
len=strlen(s);
int point=-1;
int i; 
for(i=0;i<len;i++){
	if(s[i]=='.'){
		point=i;
		break;
	}
}
if(point!=-1&&t>0){
	for(i=point+1;i<len;i++){
		if(s[i]>='5'){
			t--;
			s[i]='\0';
			len=i;
			int j=i-1;
			while(j>=0){
				if(s[j]=='.'){
					j--;
					continue;
				}
				s[j]++;
				if(s[j]==':'){
					s[j]='0';
					j--;
				}
				else if(s[j]>='5'&&t>0){
					t--;
					s[j]='\0';
					len=j;
					j--;
				}
				else{
					break;
				}
			}
			if(j<0){
				int k;
				for(k=len;k>=0;k--){
					s[k+1]=s[k];
				}
				s[0]='1';
				len++;
				point++;
			}
			break;
		}
	}
}
if(point!=-1){
	int last;
	last=strlen(s)-1;
	while(last>point&&s[last]=='\0'){
		s[last]='\0';
		last--;
	}
	if(last==point){
		s[last]='\0';
	}
}
	printf("%s",s);
	
	
	
return 0;
}
