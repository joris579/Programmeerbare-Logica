#include <stdio.h>
int main(void) 
{
	int j = 13, k =47, *p = &k;

		printf("%p",&p);
		printf("%p",p);
		printf("%p",&k);
		printf("%d",*p);
		printf("%d",k);

		*p = 87;

		printf("%d",*p);
		printf("%d",k);
		printf("%d",**&p);

		return 0;
}