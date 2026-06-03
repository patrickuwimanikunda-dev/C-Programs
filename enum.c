#include <stdio.h>

typedef enum{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
}Day;

void describe_day(Day d){
    switch(d){
        case MONDAY: printf("Monday\n"); break;
        case TUESDAY: printf("Tuesday\n"); break;
        case WEDNESDAY: printf("Wednesday\n"); break;
        case THURSDAY: printf("Thursday\n"); break;
        case FRIDAY: printf("Friday\n"); break;
        case SATURDAY: printf("Saturday the weekend day\n"); break;
        case SUNDAY: printf("Sunday the Rest Day enjoy\n"); break;
    }
}
int main(){
    Day today = WEDNESDAY;
    printf("Day number: %d\n", today);

    if(today == WEDNESDAY){
        printf("MidWeek!\n");
    };
    describe_day(MONDAY);
    describe_day(TUESDAY);
    describe_day(WEDNESDAY);
    describe_day(SATURDAY);
    describe_day(SUNDAY);
}