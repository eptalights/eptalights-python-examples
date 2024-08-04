#include <stdio.h> 
#include <string.h>

struct Employee { 
    char Name[20]; 
    int employeeID; 
    int WeekAttendence[7]; 
}; 
  

int main() 
{ 
    struct Employee emp[5]; 
  
    for (int i = 0; i < 5; i++) { 
        emp[i].employeeID = i; 
        strcpy(emp[i].Name, "Amit"); 
        int week; 
        for (week = 0; week < 7; week++) { 
            int attendence; 
            emp[i].WeekAttendence[week] = week; 
        } 
    } 
    printf("\n"); 
  
    for (int i = 0; i < 5; i++) { 
        printf("Emplyee ID: %d - Employee Name: %s\n", 
               emp[i].employeeID, emp[i].Name); 
        printf("Attendence\n"); 
        int week; 
        for (week = 0; week < 7; week++) { 
            printf("%d ", emp[i].WeekAttendence[week]); 
        } 
        printf("\n"); 
    } 
  
    return 0; 
}