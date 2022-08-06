#include<iostream>

using namespace std;

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
    int arr[50] = {5,4,3,2,1,6,9,10,11,7};
    int size=10;
    insertionSort(arr, size);
    for(int m=0;m<size;m++){
        cout<<"arr["<<m<<"]= "<<arr[m]<<endl;
    }
    return 0;
}