#include <stdio.h>

int main()
{
	int sec,hours,minutes;
	printf("Give an number of seconds:");
	scanf("%d",&sec);
	hours=sec/3600;
	minutes=(sec%3600)/60;
	sec=(sec%3600)%60;
	printf("%dHours,%dMinutes,%dseconds",hours,minutes,sec);
}
