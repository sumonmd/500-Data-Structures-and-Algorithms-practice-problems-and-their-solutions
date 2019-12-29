#include<bits/stdc++.h>
using namespace std;

string getPalindrome(string str,int left,int right)
{
    int len = str.size()-1;
    while(left>=0 && right<=len && str[left]==str[right]){
        left--;
        right++;
    }
    return str.substr(left+1,right-left-1);
}
string givePalindrome(string str)
{
    int len = str.size();
    string curr_str,max_str="";
    int curr_len,max_len=0;
    for(int i=0;i<len;i++){
        curr_str = getPalindrome(str,i,i);
        curr_len = curr_str.size();
        if(curr_len>max_len){
            max_len=curr_len;
            max_str = curr_str;
        }

        curr_str = getPalindrome(str,i,i+1);
        curr_len = curr_str.size();
        if(curr_len>max_len){
            max_len=curr_len;
            max_str = curr_str;
        }
    }
    return max_str;
}

int main()
{
    char str[50];
    cin>>str;
    cout<<givePalindrome(str)<<endl;

    return 0;
}
