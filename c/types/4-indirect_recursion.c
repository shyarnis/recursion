#include<stdio.h>

int funA(int n);
int funB(int n);
int funC(int n);

int main() 
{
    int x = 1000;
    funA(x);
}

int funA(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        funB(n-1);
    }
}

int funB(int n)
{
    if(n>1)
    {
        printf("%d\n",n);
        funC(n/2);
    }
}

int funC(int n)
{
    if(n>1)
    {
        printf("%d\n",n);
        funA(n/3);
    }
}