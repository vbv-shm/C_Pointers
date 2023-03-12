#include<stdio.h>
int main(){
    int A[]={2,3,4,12,31};
    printf("%d\n",sizeof(A));
    printf("%p\n",A);       //address of first int
    printf("%d\n",&A[0]);   //address of first int
    printf("%d\n",A[0]);    // Value of first int
    printf("%d\n",*A);      // Value of first int

    for(int i=0;i<5;i++){
        printf("Value of %dth element of Array = %d\n",i,*(A+i));
        printf("Address of %dth element of Array = %d\n\n",i,(A+i));
    }
}