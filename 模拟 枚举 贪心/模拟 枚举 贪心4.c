#include<stdio.h>
#include<string.h>
int main()
{int T;
scanf("%d",&T);
while(T--){
 char s[100005];
scanf("%s",s);
int len;
len=strlen(s);
int i;
for(i=0;i<len;){
	if(s[i]=='0'||s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='9'){
		printf("%c",s[i]);
		i++;
	}
	else if(s[i]=='z'&&i+3<len&&strncmp(&s[i],"zero",4)==0){
		printf("0");
		i+=4;
	}else if(s[i]=='t'&&i+2<len&&strncmp(&s[i],"two",3)==0){
		printf("2");
		i+=3;
	}else if(s[i]=='f'&&i+3<len&&strncmp(&s[i],"four",4)==0){
		printf("4");
		i+=4;
	}else if(s[i]=='s'&&i+2<len&&strncmp(&s[i],"six",3)==0){
		printf("6");
		i+=3;
	}else if(s[i]=='n'&&i+3<len&&strncmp(&s[i],"nine",4)==0){
		printf("9");
		i+=4;
    }else{
    	i++;
	}
}
printf("\n");	
}
	
	
	
	
	
	return 0;
}
