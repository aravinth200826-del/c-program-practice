#include<stdio.h>
#include<string.h>

#define MAX 20  // define the MAX size as 20

char stack[MAX];
int top=-1;


void push(char c) {
if (top==MAX-1) {
printf("Stack is overflow");
return;
}
top++;
stack[top]=c;   //if top is 0,c value store at stack[0] place
}               //in main function is run again again the push function stack[top] the top is incresed and stores the value of c


char pop (){    
if(top==-1){
printf("Stack is empty");
return -1;
}
return stack[top--]; // we want get the value in main function so  we use the return operation
}

int main() {
char str[MAX];
printf("Enter a word:\n");
scanf("%s",str);

int length=strlen(str);

for (int i=0;i<length;i++){
push(str[i]);
}

for(int i=0;i<length;i++) {
str[i]=pop();
}

printf("Reversed order: %s",str);

return 0;
}
  
