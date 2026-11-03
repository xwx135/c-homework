#include<stdio.h>
int p(int y){
	if((y%4==0&&y%100!=0)||(y%400==0)){
		return 1;
	}
  return 0;
} 
int f(int num,int x){
	int count=0;
	if((num/10)==x){
		count++;
	}if((num%10)==x){
		count++;
	}
	return count;
}
int main()
{int y,m,x;
while(scanf("%d%d%d",&y,&m,&x)!=EOF){
int a=0;
int day=0;
if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
	day=31;
}else if(m==4||m==6||m==9||m==11){
	day=30;
}else if(m==2){
	if(p(y)==1){
		day=29;
	}else{
		day=28;
	}
}
int yearnum=0;
if((y/1000)==x){
	yearnum++;
}if((y/100%10)==x){
	yearnum++;
}if((y/10%10)==x){
	yearnum++;
}if((y%10)==x){
	yearnum++;
}
int ans ; 
ans+=yearnum*day;
ans+=f(m,x)*day;
int i;
for(i=1;i<=day;i++){
	ans+=f(i,x);
}
printf("%d",ans);
}



	
	
	
	
return 0;
}
