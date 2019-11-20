#include<bits/stdc++.h>
using namespace std;

string getReverse(string str)
{
    int ln = str.size();
    string sentence="",word="";
    for(int i=0;i<=ln;i++){
        if(str[i]!=' ' && i!=ln ){
            word=word+str[i];
        }
        else{
            if(str[i]==' '){
                sentence = word+ "*"+sentence;
                word="";
            }
            else if(i==ln){
                sentence = word +"* "+ sentence;
                word="";
                break;
            }
        }
    }
    return sentence;
}
int main()
{
    string str ;
    getline(cin,str);
    cout<<getReverse(str)<<endl;


    return 0;
}
