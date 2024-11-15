//
// Created by mcgec on 15/11/2024.
//
#include <string.h>
#include <stdio.h>

typedef struct emp_struct
{ char *name;
    int employee_no;
    float salary, tax_to_date;
} Employee;

typedef Employee Database [10];
Database people = /*initializer: real DB would read from disk*/
{ {"Fred", 10, 10000, 3000},
{"Jim", 9, 12000, 3100.5},
{"Fred", 13, 1000000, 30},
{"Mary", 11, 170000, 40000},
{"Judith", 45, 130000, 50000},
{"Nigel", 10, 5000, 1200},
{"Trevor", 10, 20000, 6000},
{"Karen", 10, 120000, 34000},
{"Marianne", 10, 50000, 12000},
{"Mildred", 10, 100000, 30000}
} ;

void swap(Employee Database[10], int i, int j){
    Employee temp = Database[i];
    Database[i] = Database[j];
    Database[j] = temp;
}

void sort(Employee Database[10]){
    int i = 1;
    while (i < 10) {
        int j = i;
        while (j > 0) {
            if (strcmp(Database[j-1].name, Database[j].name) > 0){
                swap(Database, j-1, j);
            }
            else if (strcmp(Database[j-1].name, Database[j].name) == 0 && Database[j-1].employee_no > Database[j].employee_no){
                swap(Database, j-1, j);
            }
            j = j-1;
        }
        i = i+1;
    }
}
int main(){

    printf("Employee data:\n");
    for (int i = 0; i < 10; i++) {
        printf("%-10s %3d %10.2f %10.2f\n",
                       people[i].name,
                       people[i].employee_no,
                       people[i].salary,
                       people[i].tax_to_date);
    }

    sort(people);

    printf("Employee data:\n");
    for (int i = 0; i < 10; i++) {
        printf("%-10s %3d %10.2f %10.2f\n",
                       people[i].name,
                       people[i].employee_no,
                       people[i].salary,
                       people[i].tax_to_date);
    }

    return 0;
}