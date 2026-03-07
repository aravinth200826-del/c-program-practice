#include<stdio.h>
#include<string.h>

#define MAX 20

char stack[MAX];
int top=-1;


void push(char c) {
if (top==MAX-1) {
printf("Stack is overflow");
return;
}
top++;
stack[top]=c;
}
char pop (){
if(top==-1){
printf("Stack is empty");
return -1;
}
return stack[top--];
}

int main() {
char str[MAX];
printf("Enter a word:\n");
scanf("%d",str);

int length=strlen(str);

for (int i=0;i<length;i++){
push(str[i]);
}

for(int i=0;i<length;i++) {
str[i]=pop();
}

printf("Reversed oreder: %s",str);

return 0;
}
  
