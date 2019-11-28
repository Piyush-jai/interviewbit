#implementation of power function

#include<stdio.h>
{
int power(int a,int p)
{
    if(a==0)
    return 0;
    if(p==0)
    return 1;
        int result=a;
    if(a>0 && p>0)
    {
 result= result*power(result,p-1);
 
    }
    return result;
}
    int main()
    {
    int a=3,p=3;
    if(a==0 && p==0)
    {
        printf("undefined");
    }
    else
    {
        int result = power(a,p);
        printf("%d",result);
    }
    return 0;
}
