#include <stdio.h>

//We define a very small stack limitnso we csn break it easily
#define MAX 3

int stack[MAX];
int top = -1; // -1 mean the stack is completely empty

void push(int data){
    // SECURITY CHECK: Is the memory already full?
    if (top == MAX - 1){
        printf("\n[!] SECURITY ALERT: Stack Overflow detected! Cannot push %d.\n", data);
        return;
    }

    // If not full, move the top pointer up and insert the data
    top = top + 1;
    stack[top] = data;
    printf("Successfully pushed %d. Stack top is now at index %d.\n", data, top);
}

int main(){
    printf("----Initiating Stack Memory----\n");

    push(100);
    push(200);
    push(300);

    //The array can only hold 3 items. This next push is the exploit attempt.
    push(400);

    return 0;
}
