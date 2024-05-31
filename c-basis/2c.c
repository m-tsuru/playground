#include <stdio.h>

int main()
{
    int raw;

    int day;
    int hour;
    int minute;
    int second;

    printf("a [s]? ");
    scanf("%d", &raw);

    day = raw / (60 * 60 * 24);
    hour = (raw - (60 * 60 * 24 * day)) / (60 * 60);
    minute = (raw - (60 * 60 * (24 * day + hour))) / 60;
    second = (raw - (60 * (minute + 60 * (24 * day + hour))));

    printf("day: %d\n", day);
    printf("hour: %d\n", hour);
    printf("minute: %d\n", minute);
    printf("second: %d\n", second);

    return 0;
}
