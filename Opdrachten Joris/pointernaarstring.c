//#include "stdafx.h"
#include <stdio.h>  		// nodig voor printf
#include <string.h> 		// nodig voor stringmanipulatie

int main (void)
   {
	char *groet;

	groet = "hallo, het is weer een mooie dag \n\n";

	
	
	printf (groet);
	

	int x = 0;
	while(groet[++x]);
	printf ("%d \n", x);

	char print[100];

	strlcpy(print,groet,sizeof(print));
	strlcat(print,"Hoi, hoe gaat het",sizeof(print));
	strlcat(print," met jou?",sizeof(print));
	printf("%s\n",print);


	return 0;

   }
