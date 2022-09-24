#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> &vec){
    for(int x : vec){
        cout<<x<<" ";
    }
    cout<<endl;
}

vector<int> countingSort(vector<int> arr){
    vector<int> output(arr.size());
    vector<int> count(20,0);
    for(auto x:arr){
        ++count[x];
    }
    int max=*max_element(arr.begin(),arr.end());
    for(int i=1;i<=max;++i){
        count[i]+=count[i-1];
    }
    for(int i=arr.size()-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];    
    }
    return output;
}

int main(){
    vector<int> input{2,3,1,0,6,7,9,11,13,1};
    vector<int> output=countingSort(input);
    display(output);
    return 0;
}