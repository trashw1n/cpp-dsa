#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &vec){
    for(int x : vec){
        cout<<x<<" ";
    }
    cout<<endl;
}

void recursiveInsertionSort(vector<int> &vec,int n){
    if(n<=1) return;
    recursiveInsertionSort(vec,n-1);
    int last=vec[n-1];
    int index=n-2;
    while(index>=0 && vec[index]>last){
        vec[index+1]=vec[index];
        index--;    
    }
    vec[index+1]=last;
}

void insertionSort(vector<int> &vec){
    int current;
    int size=vec.size();
    for(int m=1;m<size;m++){
        current=vec[m];
        int j=m-1;
        while(j>=00 && vec[j]>current){
            vec[j+1]=vec[j];
            j--;
        }
        vec[j+1]=current;
    }
}

int main(){
    vector<int> vec1{5,4,3,2,1,6,9,10,11,7};
    vector<int> vec2{6,8,1,3,10,45};
    //insertionSort(vec1);
    //display(vec1);
    display(vec2);
    recursiveInsertionSort(vec2,vec2.size());
    display(vec2);
    return 0;
}