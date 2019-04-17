/*
 ============================================================================
 Name        : Calc_with_vectors.c
 Author      : =^_^=
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



float factorial(float n)
{
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int algebra()
{
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
                break ;
            case 3:
                printf(" Answer=%f", a/b);
               break;
            case 4:
                printf(" Answer=%f", pow (a, b));
                break;
            case 5:
                printf(" Answer=%f", factorial(a));
                break;
        }
}


int vectors()
{
    int  i ,n  ;
    printf("Write size of vectors");
    scanf("%i", &i ); // Вводим длинну векторов
    float *A , *B ,e ,d;
    if (A != NULL) A = malloc(i*sizeof(float));
    if (B != NULL) B = malloc(i*sizeof(float));
    printf("Write first vector");
    for (int k=0;k<i;k++)
        scanf("%f", &A[k]);
    printf("Write second vector");
    for (int l=0;l<i;l++)
        scanf("%f", &B[l]);
    printf("Choose operation  0-plus 1-minus 2-scalar");
    scanf ("%i",&n) ;
    switch (n)
        {
            case 0:
                for (int p=0;p<i;p++)
                    printf("Answer=%f" , A[p]+B[p]);
                break;
            case 1:
                for (int r=0;r<i;r++)
                    printf("Answer=%f" , A[r]-B[r]);
                break ;
            case 2:
                e=0;
                for (int s=0;s<i;s++)
                {
                    d=A[s]*B[s];
                    e=e+d;
                }
                printf(" Answer=%f", e);
                break;
        }
}


int main(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    int z , v;
    do {printf("Choose type: 0-numbers , 1-vectors");
    scanf("%i", &z);
    if (z==0)
        algebra();
    else
        vectors();
    printf("Do you wish to restart program? (1-yes , 0-no)");
    scanf ("%i",&v) ;
    }while(v==1);
    if(v==0)
    printf("Program is closed\n");



}
