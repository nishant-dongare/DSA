#include<stdio.h>

void bubbleSort(int[],int);
void printArray(int arr[],int len);
void main(){
  int arr[5] = {50,20,10,40,30};
  int len = sizeof(arr)/sizeof(arr[0]);
  bubbleSort(arr,len);
}

void bubbleSort(int arr[],int len){
  int temp;
  for(int i=0;i<len;i++){
    for(int j=0;j<len-1;j++){
      if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
    printArray(arr,len);
  }
}

void printArray(int arr[],int len){
  for(int i=0;i<len;i++){
    printf("=> %d",arr[i]);
  }
  printf("\n");
}