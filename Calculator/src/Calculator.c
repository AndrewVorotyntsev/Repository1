/*
 ============================================================================
 Name        : Calculator.c
 Author      : =^_^=
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    float a , b , c ;
    int i ;
    scanf ("%f",&a) ;
    scanf ("%f",&b) ;
    scanf ("%i",&i) ;
    switch (i)
    {
        case 0:
            c=a+b;
            break;
        case 1:
            c=a-b;
            break ;
        case 2:
            c=a*b;
            break;
        case 3:
           c=a/b;
           break;
    }
         printf(" Answer=%f", c);
}
