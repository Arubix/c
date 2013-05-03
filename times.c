// Andre Blanco
// 20121030

// Time

#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int hours;
    int minutes;
    int seconds;         
} TIME;

void printTime(TIME t);
void printTimeReference(TIME*);
void normalizeTime(TIME*);

int main(void){
    
    TIME noon;
    TIME test = {1, 70, 130}; 
    
    printTime(test);
    normalizeTime(&test);
    printTime(test);
    
    noon.hours = 12;
    noon.minutes = 30;
    noon.seconds = 0;
    
    printTime(noon);
    printTimeReference(&noon);
    
    printf("\n");
    system("pause");
    return 0;
}
void printTime(TIME t){
     printf("%2d:%2d:%2d\n", t.hours, t.minutes, t.seconds);  
     t.hours = 23;
     t.minutes = 39;  
}
void printTimeReference(TIME *pTime){
     printf("%2d:%2d:%2d\n", pTime->hours, pTime->minutes, pTime->seconds); 
     
     (*pTime).hours = 11;
     pTime->minutes = 15;   
}
void normalizeTime(TIME *t){
     int extraMinutes;
     int extraHours;
     
     extraMinutes = t->seconds / 60;
     t->minutes += extraMinutes;
     t->seconds %= 60;
     
     extraHours = t->minutes / 60;
     t->hours += extraHours;
     t->minutes %= 60;
}
