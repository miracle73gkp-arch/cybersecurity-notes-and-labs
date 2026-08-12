#include <stdio.h>

int main(){

    int num;
    printf("Enter the number to check if +ve, -ve or zero: ");
    scanf("%d",&num);

    if (num > 0){
        printf("The number %d is Positive.",num);
    }
    else if (num < 0){
        printf("The number %d is Negative.",num);
    }
    else{
        printf("The number %d is Zero.",num);
    }
    return 0;
}