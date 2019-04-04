/*
 ============================================================================
 Name        : Calculator.c
 Author      : AndrewVorotyntsev
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main(void) {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    float factorial(float n) #Задаем функцию факториал
    {
        if (n == 0 || n == 1) return 1; 
        return n * factorial(n - 1);
    }
    int c ;
    do {
        float a , b ;
        int i ;
        printf("Write fist number");
        scanf ("%f",&a) ;
        printf("Write second number");
        scanf ("%f",&b) ;
        printf("Choose operation \n 0-plus 1-minus 2-times 3-Divided by 4-power 5- factorial");
        scanf ("%i",&i) ;
        switch (i)
            {
                case 0:
                    printf(" Answer=%f", a+b);
                    break;
                case 1:
                    printf(" Answer=%f", a-b);
                    break ;
                case 2:
                    printf(" Answer=%f", a*b);
                    break;
                case 3:
                    printf(" Answer=%f", a/b);
                   break;
                case 4:
                    printf("%f", pow (a, b));
                    break;
                case 5:
                    printf(" Answer=%f", factorial(a));
                    break;
            }
        printf("Do you wish to restart program? (1-yes , 0-no)");
        scanf ("%i",&c) ;
        }while(c==1);
        if(c==0)
        printf("program is closed\n");
}
