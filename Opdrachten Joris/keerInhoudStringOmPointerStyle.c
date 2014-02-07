#include <stdio.h>
#include <string.h>
		
		void invertString(char * inverterized);

		int main()
			{
				char input[] = "Diederich is een goede docent!";
				printf("Input: %s\n",input);
				invertString(input);
				printf("Output: %s\n", input);

				return 0;
			}

		void invertString(char * inverterized)
		{
				int size = strlen(inverterized)-1;
				char * invertable = inverterized;
				char output[size];
				int x = 0;
				while(size>=x)
				{
					output[x]=invertable[size-x];
					++x;
				}
				strcpy(invertable, output);
		}

