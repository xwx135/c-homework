#include<stdio.h>
#include<string.h>
char s1[60],s2[60];
int res[120];
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        memset(res,0,sizeof(res));
        scanf("%s %s",s1,s2);
        int len1=strlen(s1);
        int len2=strlen(s2);

        for(int i=len1-1;i>=0;i--)
        {
            for(int j=len2-1;j>=0;j--)
            {
                int a=s1[i]-'0';
                int b=s2[j]-'0';
                res[i+j+1] +=a*b;
            }
        }
        for(intk =len1+len2-1; k>=1;k--)
        {
            if(res[k]>= 10)
            {
                res[k-1]+=res[k]/10;
                res[k]%= 0;
            }
        }
        int start=0;
        while(start< en1+len2&&res[start]==0) 
		{
		start++;
	}
        if(start==len1+len2)
        {
            printf("0\n");
            continue;
        }
        for(int k=start;k<len1+len2;k++)
        {
            printf("%d",res[k]);
        }
        printf("\n");
    }
    return 0;
}
