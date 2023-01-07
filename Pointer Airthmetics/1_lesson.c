// How Integer is stored in Memory
// Binary of 1025 is 10000000001 
// int a=1025; int* p=&a;
// 1025 is int therefore will be stored in 4 bytes memory space.

// Pointer point to the lowest available address(byte) or to the starting byte.

//   byte3     byte2     byte1     byte0
// 00000000  00000000  00000100   00000001
// ^ Left most bit is for sign. 0 is positive 1 is negative.

// 




#include<stdio.h>
int main(){
    int a=1025;
    int* p;
    p=&a;
    // p=(char*)p; this gives error
    printf("\nSize of integer is %d bytes\n",sizeof(int));
    printf("Size of char is %d bytes\n\n",sizeof(char));

    printf("Address in p is %d\n",p);
    
    char* p0;
    p0=(char*)p;//typecasting 
    //we can't directly write p0=p;, as p0 is pointer to char and p is pointer to integer.  So (char*) type casts the pointer p to char.

    printf("Address in p0 is %d\n\n",p0); //p0 stores the same address but it is a char pointer
    printf("Value of address seen from derefrencing p is %d\n",*p);
    printf("Value of address seen from derefrencing p0 is %d",*p0);
    printf("\nBoth p and p0 points to same address but p is pointer to int and p0 is pointer to char. So p will see value of 4 bytes starting from the base address and p0 will only see the value of 1 byte.");

}