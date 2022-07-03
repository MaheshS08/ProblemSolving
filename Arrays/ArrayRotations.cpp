
#include <bits/stdc++.h>

using namespace std;

//REVERSING
void reverseArray(vector<int>& nums,int start,int end){
    while(start<end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}

//RIGHT ROTATION
void rotateArrayRight(vector<int>& nums,int k,int n){
    reverseArray(nums,0,n-1);
    reverseArray(nums,0,k-1);
    reverseArray(nums,k,n-1);
    for(auto i:nums){
        cout<<i<<" ";
    }
}


//LEFT ROTATION
// void rotateArrayLeft(vector<int>& nums,int k,int n){
//     reverseArray(nums,0,n-1);
//     reverseArray(nums,0,k);
//     reverseArray(nums,k+1,n-1);
//     for(auto i:nums){
//         cout<<i<<" ";
//     }
// }

int main()
{
    vector<int> nums = {1,2,3,4,5};
    rotateArrayRight(nums,2,5);
    return 0;
}
