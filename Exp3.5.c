#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int total_days = 0;
    for(int y = 1; y < year; y++) {
        total_days += 365;
        if(isLeapYear(y))
            total_days += 1;
    }
    int day_index = total_days % 7;
    printf("The day on 1st January of year %d is %s.\n", year, days[day_index]);

    return 0;
}
