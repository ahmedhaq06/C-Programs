#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds, remainder;

    printf("Enter total number of seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    remainder = totalSeconds % 3600;
    minutes = remainder / 60;
    seconds = remainder % 60;

    printf("\n%d seconds is equal to: \n", totalSeconds);
    printf("%d Hours, %d Minutes, and %d Seconds\n", hours, minutes, seconds);

    return 0;
}