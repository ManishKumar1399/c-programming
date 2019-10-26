#include<stdio.h>
#include<conio.h>
/**********************************************
Author: Manish kumar
purpose: To identify the no is odd or even
*********************************/
void main ()
{
    int input;
    //read value from user
    printf("Enter any No");
    scanf("%d",&input);

    //logic used in the coding
    if(input%2==0)
        printf("%d is even number",input);
    else
        printf("%d is odd no",input);
    getch();


}
