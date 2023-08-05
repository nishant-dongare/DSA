#include <stdio.h>

int TOP=-1;
int array[5];

void addElement();
int findElement();
void display();
void removeElement();
void removeAllElement();

void main(){
  int c;
  while(c!=0){
    printf("\nEnter your choice : ");
    scanf("%d",&c);
    switch(c){
      case 1:
        addElement();
        break;
      case 2:printf("%d",findElement()++);
        break;
      case 3:display();
        break;
      case 4:removeElement();
        break;
      case 5:removeAllElement();
        break;
      default:c=0;
    }
  }
}

void addElement(){
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

void removeElement(){
  array[TOP]=NULL;
  TOP--;
}

void removeAllElement(){
  for(int i=0;i<=TOP;i++){
    array[TOP]=NULL;
  }
  TOP=-1;
}