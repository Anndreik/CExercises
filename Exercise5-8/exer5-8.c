#include <stdio.h>

static char daytab[2][13] = { 
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, 
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} 
}; 
/* day_of_year:  set day of year from month & day */ 
int day_of_year(int year, int month, int day) 
{ 
    int i, leap;
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    if(year < 1){
        return -1;
    }
    if(month < 1 || month > 12){
        return -1;
    }
    if(day < 1 || day > daytab[leap][month]){
        return -1;
    }
    for (i = 1; i < month; i++) 
        day += daytab[leap][i]; 
    return day; 
}

/* month_day:  set month, day from day of year */ 
void month_day(int year, int yearday, int *pmonth, int *pday) 
{ 
    int i, leap;
    if(year < 1 || yearday < 1) {
        *pmonth = -1;
        *pday = -1;
        return;
    }
    
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0; 

    if(leap == 0 && yearday > 365){
        *pmonth = -1;
        *pday = -1;
        return;
    }

    if(leap == 1 && yearday > 366){
        *pmonth = -1;
        *pday = -1;
        return;
    }

    for (i = 1; yearday > daytab[leap][i]; i++) {
        yearday -= daytab[leap][i];
    }
    *pmonth = i; 
    *pday = yearday; 
}

int main(){
    int day,mon,dat;
    day=day_of_year(1981,4,31);
    printf("%d\n",day);    
    month_day(1980,366,&mon,&dat);    
    printf("%d,%d\n",mon,dat);
return 0;
}