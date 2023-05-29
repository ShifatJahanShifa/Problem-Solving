#include<cmath>
#include<string.h>
string dayOfTheWeek(int day, int month, int year) 
{
    string days[] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    if (month < 3) 
    {
        month += 12;
        year -= 1;
	}
	int c = year / 100;
	int k = year % 100;
	int h =int(day+floor(13*(month+1)/5)+k+floor(k/4)+floor(c/4)+(5*c)) % 7;
	return days[h];
}

link: https://www.geeksforgeeks.org/zellers-congruence-find-day-date/
