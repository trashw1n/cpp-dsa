#include<iostream>
using namespace std;

void merge(int[],int,int,int);
void mergeSort(int[],int,int);

int main(){
    int arr[]={6,4,3,2,1,10,45,91};
    int size=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    for(int m=0;m<size;m++){
        cout<<"arr["<<m<<"]= "<<arr[m]<<endl;
    }
    return 0;
}

void merge(int arr[],int p,int q,int r){
    int n1=q-p+1, n2=r-q;
    int *L=new int[n1], *R=new int[n2];
    for(int i=0;i<n1;i++){
        L[i]=arr[p+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=arr[q+j+1];
    }
    int i=0;
    int j=0;
    int k=p;
    //for(int k=p;k<r;k++) (L[i]<=R[j])?(arr[k]=L[i++]):(arr[k]=R[j++]);
    while (i<n1 && j<n2) {
        if (L[i]<=R[j]) {
            arr[k]=L[i];
            i++;
        }
        else {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while (i<n1) {
        arr[k]=L[i];
        i++;
        k++;
    }
    while (j<n2) {
        arr[k]=R[j];
        j++;
        k++;
    }
    delete[] L;
    delete[] R;
}

void mergeSort(int arr[],int p,int r){
    if(p>=r) return;
    int q=(int)((p+r)/2);
    mergeSort(arr,p,q);
    mergeSort(arr,q+1,r);
    merge(arr,p,q,r);
}