#include<bits/stdc++.h>

enum DAY {SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATARDAY};

int main()
{
    enum DAY today;

    today = THURSDAY;

    switch(today)
    {
    case SUNDAY:
        printf("Today is Sunday.It is a work day\n");
    case MONDAY:
        printf("Today is MONDAY.It is a work day\n");
    case TUESDAY:
        printf("Today is TUESDAY.It is a work day\n");

    case WEDNESDAY:
        printf("Today is WEDNESDAY.It is a work day\n");

    case THURSDAY:
        printf("Today is THRUSDAY.It is a work day\n");

    case FRIDAY:
        printf("Today is FRIDAY.It is a holiday day\n");

    case SATARDAY:
        printf("Today is SATARDAY.It is a work day\n");

    }
}
