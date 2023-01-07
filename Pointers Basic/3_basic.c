#include <stdio.h>
int main()
{
    int a=10;
    int *p=&a;// short form of writing

    printf("Address in p is %d\n",p);
    printf("Size of integer is %d bytes\n",sizeof(int));
    printf("Address of p+1 is %d\n",p+1);// Here p is pointer to int and size of int is 4, so adding 1 to p will actually add 4 to p.  
}

// 1 byte contains 8 bits.