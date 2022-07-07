
/*
   Given a String, remove all non-alphanumeric and convert Upper case to lower case and check whether it is palindrome or not
   
*/

#include <bits/stdc++.h>
using namespace std;

//TWO-POINTER TECHNIQUE

bool isValid(string& s,int l,int r){
    while(l<=r){
        while(l<r && !isalnum(s[l])){
            l++;
        }
        while(l<r && !isalnum(s[r])){
            r--;
        }
        if(char(tolower(s[l])) != char(tolower(s[r]))){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int main()
{
    string s = "";
    cin>>s;
    int l=0,r=s.length()-1,n=s.length();
    cout<<isValid(s,l,r);
}
