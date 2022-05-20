#include <bits/stdc++.h>

using namespace std;

void printSubSequences(int i,vector<int>& ds,int arr[],int n){
    if(i==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0) cout<<"{}";
        cout<<endl;
        return;
    }   
    ds.push_back(arr[i]);
    printSubSequences(i+1,ds,arr,n);
    ds.pop_back();
    printSubSequences(i+1,ds,arr,n);    
}

int main()
{
 
    int n=0;
    cin>>n;
    int arr[n]={3,1,2};
    vector<int> ds;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printSubSequences(0,ds,arr,3);
    return 0;
}
