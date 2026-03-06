#include<stdio.h>
#include<stdlib.h>

//define the MAX size is 5 in all places
#define MAX 5

int top=-1; 
int stack[MAX];

void push(int value) {
    if(top==MAX-1) {    
        printf(" Stack is overflow");
    }
    else {
        top++;  // top moves -1 to 0 and stores value at stack[0]
        stack[top]=value;
        
    }
}
void pop () {
    if (top==-1) {
        printf("Stack is underflow");
        }
        
    else {
        printf("%d is a pop element",stack[top]); // pop operation removes the top element from the stack
        top--;
    }    
        
        
}
void display () {
if (top==-1) {
printf("Stack is empty"); 
}

    for(int i=top;i>=0;i--) {
        printf("%d ",stack[i]);
    } 
}

int main() {
    printf("The elements are\n");
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    printf("\n");
    
    
    
    pop();
    printf("\n After a pop\n");
    display();
    
    
    
return 0;    
}


