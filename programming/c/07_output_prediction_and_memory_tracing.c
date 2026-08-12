#include <stdio.h>
 int main(){
    int x = 5;
    for(int i = 1; i <= 3; i++){
        x = x + i;
    }
    printf("%d",x);
    return 0;
 }

 /*Here is exactly how a computer executes that loop in memory:
Initialization: x = 5
Iteration 1 (i = 1): x = x + i ➔ x = 5 + 1 ➔ x is now 6
Iteration 2 (i = 2): x = x + i ➔ x = 6 + 2 ➔ x is now 8
Iteration 3 (i = 3): x = x + i ➔ x = 8 + 3 ➔ x is now 11
Loop ends (because i becomes 4).
Print x: Output is 11.*/