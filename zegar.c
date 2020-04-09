#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int hours, minutes, seconds;

	time_t now;

    //aktualny czas
	time(&now);
	
    //czas lokalny na godziny, minuty i sekundy
	struct tm *local = localtime(&now);

    hours = local->tm_hour;      	// (0-23)
    minutes = local->tm_min;     	// (0-59)
    seconds = local->tm_sec;     	// (0-59)

    //w systmie 24-godzinnym
    printf("Czas w systmie 24-godzinnym: %02d:%02d:%02d\n",hours, minutes, seconds);

    //--------------------------------------------------------------------------------------------
	//w systmie 12-godzinnym
	if (hours < 12)	// before midday
		printf("Czas w systmie 12-godzinnym: %02d:%02d:%02d am\n", hours, minutes, seconds);

	else	// after midday
		printf("Czas w systmie 12-godzinnym: %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

    //---------------------------------------------------------------------------------------------
	//szesnatkowo
    char time_str[40];
    sprintf(time_str, "%#x:%#x:%#x", hours, minutes, seconds);

    printf("Szesnastkowo: %#x:%#x:%#x", time_str);


	return 0;
}
