#include <stdio.h>
int main()
{
    int a;

    // Way to initialize pointer. * symbol is here saying that p is a pointer. And int is saying that it is an pointer to an integer.
    int *p; // or int* p;

    
    p=&a;   // & operator is saying here "address of a".

    printf("%d\n",p);// print what is stored in "p". As address of "a" is stored in "p" therefore address of "a" will be printed. As value of "a" is not defined therefore a garbage value will be stored in a.

    printf("%d\n",*p); // Here * is saying "value at the address which is stored in p" or value of a.

    printf("%d\n",&a); // Here & is saying "address of a".

}