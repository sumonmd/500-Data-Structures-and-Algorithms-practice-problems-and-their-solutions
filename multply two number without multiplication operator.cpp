#include<bits/stdc++.h>
using namespace std;
int Multiply(int a,int b)
{
    if(a==1){
        return b;
    }
    return b+Multiply(a-1,b);

}

int getFactorial(int n)
{
    if(n==1){
        return 1;
    }
    return n*getFactorial(n-1);
}

void printReverse(string str)
{
    if(str[0]==NULL){
        return;
    }
    else
    {
        printReverse(str.substr(1));
        cout<<str[0];
    }
}

int isPalindrome(string str,int l,int r)
{
    return (l>=r || str[l]==str[r]&&isPalindrome(str,l+1,r-1));
}

void oneTten(int i)
{
    cout<<i<<" ";
    if(i<10){
        oneTten(i+1);
        cout<<i<<" ";
    }
}

int main()
{

    cout<<Multiply(10,10)<<endl;
    printReverse("sumon");
    cout<<endl;
    cout<<getFactorial(6)<<endl;
    if(isPalindrome("wadam",0,4))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;

        oneTten(1);
    return 0;
}
