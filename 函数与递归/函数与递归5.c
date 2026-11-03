#include<stdio.h>
#include<string.h>
int main()
{char res[10000]={0},s1[10000],s2[10000];
int T,i,j,k;
int len1,len2;
scanf("%d",&T);
while(T--){
	scanf("%s%s",s1,s2);

len1=strlen(s1);
len2=strlen(s2);
 for(i=len1-1;i>=0;i--){
 	for(j=len2-1;j>=0;j--){
 		int a=s1[i]-'0';
 		int b=s2[j]-'0';
	 int num=a*b;
	 res[i+j+1]+=num;
	 
 	}
 }
 for(k=len1+len2-1;k>0;k--){
 	if(res[k]>=10){
 		res[k-1]+=res[k]/10;
 		res[k]=res[k]%10;
	 }
 } int start=0;
 while(start<len1+len2-1&&res[start]==0){
 	start++;
 }
for(k=start;k<len1+len2;k++){
	printf("%d",res[k]);
}
 
 
}
return 0;
}
