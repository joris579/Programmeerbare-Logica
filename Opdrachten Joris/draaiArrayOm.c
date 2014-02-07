#include <stdio.h>

		void turnArrayAround(int a[]);
		void print(int a[]);
		int main()
		{
			int A[] = {45,1,2,3,4,5,6,7,8,9,10,11,
				1,2,3,4,5,6,7,8,9,10,11,
				1,2,3,4,5,6,7,8,9,10,11,
				1,2,3,4,5,6,7,8,9,10,11};
			printf("Before turnArrayAround:\n");print(A);
			turnArrayAround(A);
			printf("After turnArrayAround:\n");print(A);
			
			int B[] = {11,0,6,2,7,5,3,5,2,8,1};
			printf("Before turnArrayAround:\n");print(B);
			turnArrayAround(B);
			printf("After turnArrayAround:\n");print(B);

			int C[] = {5,1,3,3,7};
			printf("Before turnArrayAround:\n");print(C);
			turnArrayAround(C);
			printf("After turnArrayAround:\n");print(C);

			return 0;
		}

		void print(int a[])
		{
			int n = a[0];
			for (int i=0;i<n;i++) printf("%3d\n", a[i]);
			printf("\n");
		}

		void turnArrayAround(int a[])
		{
				int n = a[0];
				int temp[n];
				int i = 0;
				for (i = 0; i < n; i++)temp[i]=a[i];
				i=0;
				while (i < n){++i;a[i]=temp[n-i];}
		}