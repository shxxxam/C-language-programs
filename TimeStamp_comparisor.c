// Program for TimeStamp comparision in format " yy/MM/dd HH:mm:ss "
#include <stdio.h>

typedef struct TimeStamp{
    int year;
    int month;
    int date;
    int hour;
    int minute;
    int second;

}TimeStamp;

void display(TimeStamp t){
    printf("The timestamp is: %d/%d/%d %d:%d:%d \n",t.year,t.month,t.date,t.hour,t.minute,t.second);
}

int TimeStampCmp(TimeStamp t1, TimeStamp t2){
    // Make decission on the basis of year comparision
    if(t1.year > t2.year){
        return 1;
    }
    if(t1.year < t2.year){
        return -1;
    }
    // Make decissionn on basis of month comparision
    if(t1.month > t2.month){
        return 1;
    }
    if(t1.month < t2.month){
        return -1;
    }
    // Make decision on the basis of date comparision
    if(t1.date > t2.date){
        return 1;
    }
    if(t1.date < t2.date){
        return -1;
    }
    // Make decission on the basis of hour comparision
    if(t1.hour > t2.hour){
        return 1;
    }
    if(t1.hour < t2.hour){
        return -1;
    }
    // Make decissionn on basis of minute comparision
    if(t1.minute > t2.minute){
        return 1;
    }
    if(t1.minute < t2.minute){
        return -1;
    }
    // Make decision on the basis of second comparision
    if(t1.second > t2.second){
        return 1;
    }
    if(t1.second < t2.second){
        return -1;
    }
    return 0;
}

int main()
{
    TimeStamp t1 = {21,12,17,13,10,15};
    TimeStamp t2 = {20,11,25,11,44,10};
    display(t1);
    display(t2);
    int r = TimeStampCmp(t1,t2);
if(r==1){
    printf("TimeStamp one is latest as compared to second one\n");
}
else if(r==-1){
    printf("TimeStamp one is older as compared to second one\n");
}
else{
    printf("Both the TimeStamps are same\n");
}
    return 0;
}