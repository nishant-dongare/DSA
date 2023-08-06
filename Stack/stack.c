#include <stdio.h>

int TOP=-1;
int array[5];

void push();
int findElement();
void display();
void pop();
void removeAll();

void main(){
  int c;
  while(c!=0){
    printf("\nEnter your choice : ");
    scanf("%d",&c);
    switch(c){
      case 1:
        push();
        break;
      case 2:printf("%d",findElement()++);
        break;
      case 3:display();
        break;
      case 4:pop();
        break;
      case 5:removeAllElement();
        break;
      default:c=0;
    }
  }
}

void push(){
  TOP++;
  printf("\nEnter your number : ");
  scanf("%d",&array[TOP]);
}

int findElement(){
  int n;
  printf("\nEnter your number : ");
  scanf("%d",&n);
  for(int p=0;p<=TOP;p++){
    if(n==array[p]){
      return p;
    }
  }
  return -1;
}

void display(){
  for(int i=0;i<=TOP;i++){
    printf("%d",array[i]);
  }
}

void pop(){
  array[TOP]=NULL;
  TOP--;
}

void removeAllElement(){
  for(int i=0;i<=TOP;i++){
    array[TOP]=NULL;
  }
  TOP=-1;
}