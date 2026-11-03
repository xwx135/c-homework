#include<stdio.h>
int main()
{int ch;
int state=0;
while((ch=getchar())!=EOF){
 if(state==0){
	if(ch=='"'){
		putchar(ch);
        state=1;		
	}else if(ch=='/'){
		int next=getchar();
		if(next=='*'){
			state=2;
		}else{
			putchar(ch);
			if(next!=EOF){
				ungetc(next,stdin);
			}
		}	
	}else{
		putchar(ch);
	}
}else if(state==1){
	putchar(ch);
	if(ch=='\\'){
		int next=getchar();
		if(next!=EOF){
			putchar(next);
		}
	}	else if(ch=='"'){
			state=0;
		}
	} else if(state==2){
		if(ch=='*'){
	    int next=getchar();
	    if(next=='/'){
	    	state=0;
		}else{
			if(next!=EOF){
				ungetc(next,stdin);
			}
		}
	}
	}	
		
	}			
return 0;
 } 
