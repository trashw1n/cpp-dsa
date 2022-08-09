#include<iostream>

using namespace std;

void display(int arr[],int size){
    for(int m=0;m<size;m++){
        cout<<"arr["<<m<<"]= "<<arr[m]<<endl;
    }
}

void recursiveInsertionSort(int arr[],int n){
    if(n<=1) return;
    recursiveInsertionSort(arr,n-1);
    int last=arr[n-1];
    int index=n-2;
    while(index>=0 && arr[index]>last){
        arr[index+1]=arr[index];
        index--;    
    }
    arr[index+1]=last;
}

void insertionSort(int arr[],int size){
    int current;
    for(int m=1;m<size;m++){
        current=arr[m];
        int j=m-1;
        while(j>=00 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

int main(){
    int arr1[50] = {5,4,3,2,1,6,9,10,11,7};
    int arr2[50] = {6,8,1,3,10,45};
    int size1=10; //size can be computed via helper functions, focus is on the sort algorithm
    int size2=6;
    //insertionSort(arr1, size1);
    //display(arr1,size1);
    recursiveInsertionSort(arr2,size2);
    display(arr2,size2);
    return 0;
}