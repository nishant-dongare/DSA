#include<iostream>
using namespace std;

void printArray(int arr[],int len){
  for(int i=0;i<len;i++){
    printf("=> %d",arr[i]);
  }
  printf("\n");
}

void insertionSort(int arr[],int len){
  int j,key;
  for(int i=1;i<len;i++){
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
  }
  printArray(arr,len);  
}



int main(){
  int arr[5] = {50,20,10,40,30};
  int len = sizeof(arr)/sizeof(arr[0]);
  insertionSort(arr,len);
  return 0;
}

