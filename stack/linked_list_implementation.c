#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node*next;
}node;

void push(node**top,int value){
  node*newnode;
newnode=(node*)malloc(sizeof(node));
  if(newnode==NULL) {                         //check if the list is full
      printf("Stack is overflow!Meomery allocation is failed\n");
  }
    
newnode->data=value; //value stores at data of newnode
newnode->next=*top;  // newnode to point to the top

*top=newnode;   // newnode becomes the *top
 
}

int pop(node**top) {     //pop opeation always removes the top of the stack element
    if(*top==NULL) {     //check the list isEmpty
printf("Stack is Underflow!");
return-1;
    }

else {
node*temp=*top;          //create a temp variable and stores a top function value
int poppedvalue=temp->data;   //popped value stores the data of top value
*top=(*top)->next;         //now *top->next become the top of the stack
free(temp);            //Then remove the top element in the stack 
  return poppedvalue; }
}


int peek(node*top) {    //peek mean top of the stack
  if(top==NULL){      
printf("Stack is empty!");
return-1; 
  }
return top->data;
}

void display(node*p) {
  if(p==NULL) {
printf("Stack is empty!");
return;
  }
printf("Stack elements are\n");
while(p!=NULL) {
printf("%d ",p->data);
p=p->next;
}
}

int main() {
  node*top=NULL;

push(&top,10);
push(&top,20);
push(&top,30);
push(&top,40);
  display(top);

  printf("\nTop element in the stack is %d",peek(top));

  int value=pop(&top);
  if (value!=-1) {          
  printf("\nPopped element is %d",value);
  }

  printf("\nAfter a pop ");
  display(top);
  return 0;


}
