#include <stdio.h>
int main(void) {
char num[10],t;
int k=3,i,j,len=7;
//scanf("%d %d",&k,&len);
gets(num);
for(i=0;i<len;i++)
{
    for(j=i;j<len;j++)
    {
        if(num[i]>num[j])
        {
            t=num[i];
            num[i]=num[j];
            num[j]=t;
        }
    }
}
for(i=0;i<len-k;i++)
printf("%c",num[i]);
	return 0;
}
