#include<stdio.h>

int square(int n){
    return n*n;
}

int main(){
    int num,a;
    printf("Enter the number to get square: ");
    scanf("%d",&num);
    
    a = square(num);
    printf("The square of %d is %d",num, a);

    return 0;
}