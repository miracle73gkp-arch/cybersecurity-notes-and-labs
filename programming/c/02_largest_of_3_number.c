#include<stdio.h>

int main(){

    int a,b,c;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    if( a >= b && a >=c){
        printf("The number %d is largerst among three number.", a);
    }

    else if ( b >= a && b >= c ){
        printf("The number %d is largest among three number.", b);
    }
    else{
        printf("The number %d is largest among three number.", c);
    }

return 0;

}