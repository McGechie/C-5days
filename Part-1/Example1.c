//
// Created by McGechie on 11/11/2024.
//
#include <stdio.h>

void main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++)
        printf("Command line argument [%d] = %s\n", i, argv[i]);
}