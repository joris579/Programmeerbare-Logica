#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	struct GMT{
		int tm_hour,
		tm_min,
		tm_sec;
	};
	
	void fillStringWithTime(char *stringToFillWithTime);

	int main()
	{
		char timeBuffer[32];
		//char *timeBuffer = malloc(sizeof(char) * 20);
		fillStringWithTime(timeBuffer);
    	printf("The time is: %s\n",timeBuffer);
    	//free(timeBuffer);
    	return 0;
	}

	void fillStringWithTime(char *stringToFillWithTime)
	{
		struct GMT gmt;
		gmt.tm_hour = 12;
		gmt.tm_min = 42;
		gmt.tm_sec = 19;	
		char stringFilledWithTime[32] = "Time not loaded :(";
    	sprintf(stringFilledWithTime, "%02d:%02d:%02d", gmt.tm_hour, gmt.tm_min, gmt.tm_sec );
    	strcpy(stringToFillWithTime,stringFilledWithTime);

	}