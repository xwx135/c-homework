#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(const void*a,const void*b){
	char *str1=(char*)a;
	char *str2=(char*)b;
	char s1[100],s2[100];
	strcpy(s1,str1);
	strcat(s1,str2);
	strcpy(s2,str2);
	strcat(s2,str1);
	return strcmp(s1,s2)*-1;
}
int main(){
char a[20][100];
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%s",&a[i]);
}
qsort(a,n,sizeof(a[0]),compare);
for(i=0;i<n;i++){
	printf("%s",a[i]);
}
	
	
	
	
return 0;
 } 
