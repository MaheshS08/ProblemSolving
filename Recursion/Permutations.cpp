#include <bits/stdc++.h>

using namespace std;
void recurPermute(vector<int>& ds,vector<int>& nums,vector<vector<int>>& ans,int freq[]){
        if(ds.size()==nums.size()){
            for(int i=0;i<ds.size();i++){
                cout<<ds[i]<<" ";
            }
            cout<<endl;
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                recurPermute(ds,nums,ans,freq);
                ds.pop_back();
                freq[i]=0;
            }
        }
}
void permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i]=0;
        recurPermute(ds,nums,ans,freq);
        //return ans;
}
int main()
{
    vector<int> nums={1,2,3};
    permute(nums);
    return 0;
}
