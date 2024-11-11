//
// Created by mcgec on 11/11/2024.
//
#include <stdio.h>
#include <math.h>

int sign(int s) {
    if (s == 0)
        return 0;
    return abs(s)/s;
}

void main () {
    int data[10], i;
    int n = sizeof(data) / sizeof(int);
    int negatives = 0, zeros = 0, positives = 0;

    printf("Enter %d numbers: ", n);

    for (i=0; i<n; i++)
        scanf("%d", &data[i]);

    for (i=0; i<n; i++) {
        switch (sign(data[i])) {
            case -1:
                negatives++;
                break;
            case 0:
                zeros++;
                break;
            case 1:
                positives++;
                break;
            default:
                printf("Unexpected value: %d\n", sign(data[i]));
                break;
        }
    }
    printf("negatives = %d, zeros = %d, positives = %d\n", negatives, zeros, positives);
}