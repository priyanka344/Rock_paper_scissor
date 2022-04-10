#include <iostream>
using namespace std;
int reversearray(int arr[], int size){
  int start=0;
  int end=size-1;
  while(start<=end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
}
void printarray(int arr[], int size){
  for (int i=0;i<size;i++){
    cout << ""<<arr[i];
    cout << endl;
  }
}
int main(){
  int arr[5]={1,2,3,4,5};
  reversearray(arr,5);
  printarray(arr,5);
  return 0;
}
 