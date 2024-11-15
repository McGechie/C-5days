//
// Created by mcgec on 15/11/2024.
//
#include <string.h>
#include <stdio.h>

void get(char strings[10][255]){
    printf("Enter 10 strings, max 255 chars each:\n");
    for (int i=0; i<10; i++) {
        scanf("%s", strings[i]);
    }
}
void swap(char strings[10][255], int i, int j){
    char temp[255];
    strcpy(temp, strings[i]);
    strcpy(strings[i], strings[j]);
    strcpy(strings[j], temp);
}
void sort(char strings[10][255]){
    int i = 1;
    while (i < 10) {
        int j = i;
        while (j > 0 && strcmp(strings[j-1], strings[j]) > 0) {
            swap(strings, j-1, j);
            j = j-1;
        }
        i = i+1;
    }
}
int main(){
    char strings[10][255];

    get(strings);

    printf("The strings are:\n");
    for(int i=0; i<10; i++) {
        printf("%s\n", strings[i]);
    }

    sort(strings);

    printf("The strings are:\n");
    for(int i=0; i<10; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}