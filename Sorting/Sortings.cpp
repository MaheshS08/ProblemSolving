#include<bits/stdc++.h>
using namespace std;


//BUBBLE SORT
void bubbleSort(vector<int>& nums,int n){
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1])
                swap(nums[j],nums[j+1]);
        }
    }
}

//SELECTION SORT
void selectionSort(vector<int>& nums,int n){
    int min=0;
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[min]){
                min = j;
            }
        }
        swap(nums[i],nums[min]);
    }
}

//INSERTION SORT
void insertionSort(vector<int>& nums,int n){
    int key,j;
    for(int i=1;i<n;i++){
        key = nums[i];
        j = i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1] = nums[j];
            j = j-1;
        }
        nums[j+1] = key;
    }
}


//MERGE SORT

void mergeArray(vector<int>& nums,int low,int mid,int high){
    vector<int> res(high-low+1);
    int i=low,j=mid+1,k=0;
    while(i<=mid && j<=high){
        if(nums[i] <= nums[j]){
            res[k++] = nums[i++];
        }
        else{
            res[k++] = nums[j++];
        }
    }
    while(i<=mid){
        res[k++] = nums[i++];
    }
    while(j<=high){
        res[k++] = nums[j++];
    }
    for(int i=low,k=0;i<=high;i++,k++){
        nums[i] = res[k];
    }
    
}

void mergeSortH(vector<int>& nums,int l,int h){
    if(l>=h){
        return;
    }
    int mid = (l+h)/2;
    mergeSortH(nums,l,mid);
    mergeSortH(nums,mid+1,h);
    mergeArray(nums,l,mid,h);
}
void mergeSort(vector<int>& nums,int n){
    mergeSortH(nums,0,n-1);
}

int main(){
    
    vector<int> nums = {7,3,2,9,12,1,6};
    int n = nums.size();
    mergeSort(nums,n);
    for(auto i:nums){
        cout<<i<<" ";
    }
    return 0;
}
