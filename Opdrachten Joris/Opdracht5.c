#include <stdio.h>
int main(void) 
{
	int j = 13, k =47, *p = &k;

		printf("%p \n",&p);
		printf("%p \n",p);
		printf("%p \n",&k);
		printf("%d \n",*p);
		printf("%d \n",k);

		*p = 87;

		printf("%d \n",*p);
		printf("%d \n",k);
		printf("%d \n",**&p);

		return 0;
}