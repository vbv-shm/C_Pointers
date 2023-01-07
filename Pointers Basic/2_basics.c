#include <stdio.h>
int main()
{
    int a;
    int *p;
    a=20;
    p=&a; 
    printf("%d",*p); // value of address stored at p.

    //Dereferencing
    *p=12; // change the value at address where p is pointing to 12 or change the value of a to 12.

    int b=30;
    *p=b;// change the value at address where p is pointing to the value of b()=30) or change the value of a to 30.
    

}