#include<stdio.h>

int decimal_Binary(int number)
{
    int binary=0,i=1;
    while(number!=0){
        int rem = number%2;
        binary = rem*i+binary;
        number=number/2;
        i*=10;
    }
    return binary;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",decimal_Binary(n));
    return 0;
}
