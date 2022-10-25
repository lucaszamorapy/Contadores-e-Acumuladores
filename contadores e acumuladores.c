/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

main () {
    int k=0,num1=0,num2=0,contador;
    setlocale(LC_ALL,"");

       while(k<=0)
       {
        printf("-------------------------------------------\n");
        printf("Digite a quantidade de número da sequência:\n");
        printf("-------------------------------------------\n");

        scanf("%d", &k);
            if (k<=0){
            printf("Número inválido\n");
            printf("Digite uma quantidade maior que zero\n");
        }
       } 
         num1=num1+2;
        num2=num2+5;
        printf("%d/%d |", num1,num2);
        contador =1;

        while (contador!=k){
            num1 = num1+2;
            num2 = num2+5;
             printf("%d/%d |", num1,num2);
            contador =contador+1;
        }
}

