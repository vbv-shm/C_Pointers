#include<stdio.h>

int sumOfElements(int *A, int size)// (int arr[], int size) will also work
{
    int i,sum=0;
    for(i=0;i<size;i++){
        sum+=A[i];
    }
    return sum;
}
int main(){
    int A[]={1,2,3,4};
    int size=sizeof(A)/sizeof(A[0]);
    int total=sumOfElements(A,size);//There is no way to tell the function to send whole array address into function call. Only address of first array location will be sent. Therefore we have to send size also, so that inside the function called we know the length of the array.
    printf("%d",total);
}