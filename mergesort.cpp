#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>&);
void merge(vector<int>&,int,int,int);
void mergeSort(vector<int>&,int,int);

int main(){
    vector<int> vec{6,4,3,2,1,10,45,91};
    display(vec);
    mergeSort(vec,0,vec.size()-1);
    display(vec);
    return 0;
}

void merge(vector<int>& vec,int p,int q,int r){
    int n1=q-p+1, n2=r-q;
    int *L=new int[n1], *R=new int[n2];
    for(int i=0;i<n1;i++){
        L[i]=vec[p+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=vec[q+j+1];
    }
    int i=0;
    int j=0;
    int k=p;
    //for(int k=p;k<r;k++) (L[i]<=R[j])?(vec[k]=L[i++]):(vec[k]=R[j++]);
    while (i<n1 && j<n2) {
        if (L[i]<=R[j]) {
            vec[k]=L[i];
            i++;
        }
        else {
            vec[k]=R[j];
            j++;
        }
        k++;
    }
    while (i<n1) {
        vec[k]=L[i];
        i++;
        k++;
    }
    while (j<n2) {
        vec[k]=R[j];
        j++;
        k++;
    }
    delete[] L;
    delete[] R;
}

void mergeSort(vector<int>& vec,int p,int r){
    if(p>=r) return;
    int q=(int)((p+r)/2);
    mergeSort(vec,p,q);
    mergeSort(vec,q+1,r);
    merge(vec,p,q,r);
}

void display(vector<int> &vec){
    for(int x : vec){
        cout<<x<<" ";
    }
    cout<<endl;
}