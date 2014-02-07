#include	<stdio.h>

	void	func(int a[]); //declares function func

	int main()
	{
		char 	s[] = "deep in the heart of texas"; //creates and sets char array s to "deep in the heart of texas"
		char 	*p = "deep in the heart of texas";  //creates and sets char array pointer p to "deep in the heart of texas"
		int	a[3];  //creates and sets int array "a" to contain 3 values
		double	d[5]; //creates and sets double array "d" to contain 5 values

		printf(" %s%lu\n %s%d\n %s%d\n %s%d\n\n",  "sizeof(s) = ", sizeof(s), //prints the number of items in array s
			"sizeof(p) = ", sizeof(p),	//prints the number of registers used by p
			"sizeof(a) = ", sizeof(a),  //prints the number of registers used by array a
			"sizeof(d) = ", sizeof(d)); //prints the number of registers used by d
		func(a); //executes function "func"
		return 0; //returns int 0, so the OS knows the program exited without errors
	}

	void func(int a[])
	{
		printf(" In func(): sizeof(a) = %lu\n", sizeof(a)); //prints the number of registers used by the copy of int array "a" recieved by this function
	}
