#include<stdio.h>
int main(){
    int x=5;
    int* p=&x;
    int** q=&p;
    int*** r=&q;

    printf("%d\n",x);//print the value at x.
    printf("%d\n",&x);// print the address of x.
    printf("%d\n",p);// print the value of p. 
    printf("%d\n",*p);// print the value of address which stored at p. 
    printf("%d\n",*(*q));// *q --> value of p  *p --> value of x;
    printf("%d\n",*(*r));// *r --> value of q  *q --> value of p;
}