#include <stdio.h>

int main() 
{
    char time[11];
    scanf("%s", time);

    int hourTens = time[0] - '0';
    int hourOnes = time[1] - '0';
    int hour = hourTens * 10 + hourOnes;

    if (time[8] == 'A') 
    {
        if (hour == 12) 
        {
            time[0] = '0';
            time[1] = '0';
        }
    }
    else 
    {
        if (hour != 12) 
        {
            hour = hour + 12;
            time[0] = (hour / 10) + '0';
            time[1] = (hour % 10) + '0';
        }
    }

    time[8] = '\0';
    printf("%s\n", time);
    return 0;
}
