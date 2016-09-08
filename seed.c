#include <stdio.h>
int main(void) {
	
		int num,res,rem,n,r;
	scanf("%d %d",&num,&res);
	n=num;
	while(n!=0)
	{
	    rem=n%10;
	    n=n/10;
	    num=num*rem;
	}
	if(num==res)
	printf("seed");
	else
	printf("not seed");
	return 0;
}

