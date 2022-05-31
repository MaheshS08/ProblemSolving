#include <bits/stdc++.h>
using namespace std;
bool palindromString(string& s,int l,int r){
    if(l>=r)
        return true;
    if(s[l]!=s[r]){
        return false;
    }
    palindromString(s,l+1,r-1);
    
}
int main()
{
    string s="";
    cin>>s;
    cout<<palindromString(s,0,s.length()-1);
    return 0;
}
