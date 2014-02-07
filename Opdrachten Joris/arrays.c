#import <stdio.h>

	int main()
		{
			int a[] = {0,10,20,30,40,50,60,70,80,90};
			int *p;
			p=a;
			int i;
			int n = 5;
			for (i=0;i<n;i++)printf("%4d\n", a[i] );	//This will print all the values contained in int array "a" until the value at place "n" is reached
			for (i=0;i<n;i++)printf("%4d\n", p[i] );	//This will print all the values contained in int array "a" (via pointer "p")until the value at place "n" is reached
			for (i=0;i<n;i++)printf("%4d\n", *(a+i) );	//This will print all the values contained in int array "a" until the value at place "n" is reached
			for (i=0;i<n;i++)printf("%4d\n", *(p+i) );	//This will print all the values contained in int array "a" (via pointer "p")until the value at place "n" is reached
			return(1);
		}
