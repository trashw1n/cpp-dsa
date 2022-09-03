#include<iostream>
#include<vector>
using namespace std;

int maxSubarraySum(vector<int>& vec){
    int currSum=vec[0], maxSum=vec[0];
    for(int i=1;i<vec.size();i++){
        if(currSum>0) currSum+=vec[i];
        else currSum=vec[i];
        if(currSum>maxSum) maxSum=currSum;
    }
    return maxSum;
}

int main(){
    vector<int> vec{-7,1,2,3,-5,4,-3};
    cout<<maxSubarraySum(vec);
    return 0;
}