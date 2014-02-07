#include 	<stdio.h>
#include	<string.h>

		void sort3(int * n1, int * n2, int *n3);

		int main()
			{
				char * input = "Diederich is een goede docent!";
				int size = strlen(input)-1;
				char output[size];
				printf("Input: %s\n",input);
				printf("%d\n",size );
				int x = 0;
				while(size>=x)
				{
					output[x]=input[size-x];
					++x;
				}
				printf("Output: %s\n", output);
				printf("---------\n");


				int a = 52;
				int b = 95;
				int c = 2;

				printf("Int a = %d\n", a);
				printf("Int b = %d\n", b);
				printf("Int c = %d\n", c);

				sort3(&a, &b, &c);

				printf("---------\n");

				printf("Int a = %d\n", a);
				printf("Int b = %d\n", b);
				printf("Int c = %d\n", c);


				return 0;
			}
		void sort3(int *n1, int *n2, int * n3)
		{

			int temp = *n1;
			int temp2 = *n2;
			int temp3 = *n3;
			int temp4;
			if (*n1>*n2)
			{
				temp = *n2;
				temp2 = *n1;
			}
			if (temp2 > *n3)
			{
				temp3 = temp2;
				temp2 = *n3;
			}
			if (temp>temp2)
			{
				temp4 = temp2;
				temp2 = temp;
				temp = temp4;
			}
			*n1 = temp;
			*n2 = temp2;
			*n3 = temp3;

		}





