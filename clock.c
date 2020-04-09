#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int hours, minutes, seconds;

	time_t now;

    //current time
	time(&now);
	
    //local time by hours, minutes and seconds
	struct tm *local = localtime(&now);

    hours = local->tm_hour;      	// (0-23)
    minutes = local->tm_min;     	// (0-59)
    seconds = local->tm_sec;     	// (0-59)

    //in a 24-hour system
    printf("Time in a 24-hour system: %02d:%02d:%02d\n",hours, minutes, seconds);

    //--------------------------------------------------------------------------------------------
	//in a 12-hour system
	if (hours < 12)	// before midday
		printf("Time in a 12-hour system: %02d:%02d:%02d am\n", hours, minutes, seconds);

	else	// after midday
		printf("Czas w systmie 12-godzinnym: %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

    //---------------------------------------------------------------------------------------------
	//in hexadecimal
    char time_str[40];
    sprintf(time_str, "%#x:%#x:%#x", hours, minutes, seconds);

    printf("Hexidecimal: %#x:%#x:%#x", time_str);


	return 0;
}
