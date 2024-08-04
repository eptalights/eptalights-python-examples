#include <stdio.h>

int abc;

int main() {
    union Job {
       float salary;
       int workerNo;
    } j;

   j.salary = 12.3;
   abc = 10;

   // when j.workerNo is assigned a value,
   // j.salary will no longer hold 12.3
   j.workerNo = 100;
   abc = 20;

   printf("Salary = %.1f\n", j.salary);
   printf("Number of workers = %d", j.workerNo);
   return 0;
}
