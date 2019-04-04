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
    float factorial(float n) //Задаем функцию факториал
    {
        if (n == 0 || n == 1) return 1; 
        return n * factorial(n - 1);
    }
    int c ;
    do {
        float a , b ; //задаем переменные
        int i ;
        printf("Write fist number");
        scanf ("%f",&a) ; //Вводим переменные
        printf("Write second number");
        scanf ("%f",&b) ;
        printf("Choose operation \n 0-plus 1-minus 2-times 3-Divided by 4-power 5- factorial");
        scanf ("%i",&i) ; //Выбираем операцию с помощью оператора switch 
        switch (i)
            {
                case 0:
                    printf(" Answer=%f", a+b); //Выполняется сложение двух чисел
                    break;
                case 1:
                    printf(" Answer=%f", a-b);  //Выполняется вычитание двух чисел
                    break ;
                case 2:
                    printf(" Answer=%f", a*b);  //Выполняется усножение двух чисел
                    break;
                case 3:
                    printf(" Answer=%f", a/b);  //Выполняется деление первого числа на второе
                   break;
                case 4:
                    printf("%f", pow (a, b));  //Выполняется возведение первого числа в степень равную второму числу
                    break;
                case 5:
                    printf(" Answer=%f", factorial(a));  //Выполняется нахождение факториала первого числа
                    break;
            }
        printf("Do you wish to restart program? (1-yes , 0-no)"); //Запрос на повторение программы
        scanf ("%i",&c) ; //Выбор : повторить или нет
        }while(c==1);
        if(c==0)
        printf("program is closed\n");
}
