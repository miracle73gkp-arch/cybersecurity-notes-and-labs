#include <stdio.h>

int main(){

    int Number;

    printf("Enter a number: ");
    scanf("%d", &Number);

    if( Number % 2 == 0){
        printf("The number %d is even", Number);
    }
    else{
        printf("The number %d is odd", Number);
    }
return 0;
}