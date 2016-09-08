#include <stdio.h>
int main(void) {
int num[5]={31,14,15,7,2};
int len=sizeof(num)/sizeof(num[0]);
int r,n,c=0,i,j,t,count[10];
for(i=0;i<len;i++)
{ c=0;
    n=num[i];
   while(n!=0){
    r=n%2;
    n=n/2;
    if(r==1)
    c=c+1;
   }
   count[i]=c;
}
for(i=0;i<len;i++)
{
    for(j=i;j<len;j++)
    {
        if(count[i]<count[j])
        {
            t=num[i];
            num[i]=num[j];
            num[j]=t;
        }
        else if(count[i]==count[j])
        {
            if(num[i]<num[j])
            {
                t=num[i];
                num[i]=num[j];
                num[j]=t;
            }
        }
          
    }
}
for(i=0;i<len;i++)
printf("%d\t",num[i]);
	return 0;
}

