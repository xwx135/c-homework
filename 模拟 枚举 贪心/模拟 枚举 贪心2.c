#include<stdio.h>
int getmid(int a,int b){
	if(a>b){
		int t;
		t=a;
		a=b;
		b=t;
	}
	if(a==1&&b==3)return 2;
	if(a==4&&b==6)return 5;
	if(a==7&&b==9)return 8;
	if(a==1&&b==7)return 4;
	if(a==1&&b==9)return 5;
	if(a==2&&b==8)return 5;
	if(a==3&&b==9)return 6;
	if(a==3&&b==7)return 5;
	return 0;
}
int main()
{char s[35];
scanf("%s",&s);
int visited[10]={0};
int pass=1;
int len;
len=strlen(s);
int prev=s[0]-'0';
if(prev<1||prev>9){
	pass=0;
}else{
	visited[prev]=1;
}
int i;
for(i=1;i<len&&pass==1;i++){
	int curr=s[i]-'0';
	if(curr<1||curr>9){
		pass=0;
		break;
	}
	if(visited[curr]==1){
		pass=0;
		break;
	}
	int mid=getmid(prev,curr);
	if(mid!=0&&visited[mid]==0){
		pass=0;
		break;
	}
	visited[curr]=1;
	prev=curr;

}if(pass==1){
	printf("YES");	
}else{
	printf("NO");}

	
	
	
	
return 0;
 } 
